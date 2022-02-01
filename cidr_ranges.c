/*
* Author: James Cuzella
* Purpose: This program calculates which CIDR IPv4 ranges
*          are divisible by N for (0 <= N <= 16)
* 
*/
#include <stdio.h>
#include <stdbool.h>

int main(void) {

  bool is_divisible = false;
  int cidr_ips = 0;
  
  for (int i=0; i <= 16; i++) {
    cidr_ips = 1 << i;
    for (int j=1; j <= 16; j++) {
      is_divisible = (cidr_ips % j == 0);
      if (is_divisible) {
        printf("2^%d CIDR with %d IPs is divisible by %d\n", i, cidr_ips, j);
      }
    }
  }
  return 0;
}