/*
 * Author: James Cuzella
 * Copyright 2022 James Cuzella
 * Purpose: This program gives a demo for enum
 * Date: 2022-02-01
 */

#include <stdio.h>  // for printf

enum companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

int main(void) {
  enum companies yourCompany = XEROX;
  enum companies myCompany = GOOGLE;
  enum companies theirCompany = EBAY;
  printf("The value of xerox is:  %i\n", yourCompany);
  printf("The value of google is: %i\n", myCompany);
  printf("The value of ebay is:   %i\n", theirCompany);
  return 0;
}
