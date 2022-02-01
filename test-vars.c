/*
* Author: James Cuzella
* Purpose: This program uses basic data types
* 
*/
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int integerVar = 100;
  short int shortIntVar = 30;
  signed int signedIntVar = -99;
  signed short int signedIntShortVar = -1;
  unsigned int unsignedIntVar = 1;
  unsigned short int unsignedShortIntVar = 2;
  long int longIntVar = 122L;
  long long int longLongIntVar = 500ll;
  unsigned long int unsignedLongIntVar = 122e15L;
  unsigned long long int unsignedLongLongIntVar = 12ull;
  float floatingVar = 331.7900000;
  double doubleVar = 8.44e+11;
  long double longDoubleVar = 3.1e-51;
  char charVar = 'W';

  _Bool boolVar = 0;
  bool newBool = true;

  printf("integerVar = %i\n", integerVar);
  printf("shortIntVar %%hi = %hi\n", shortIntVar);
  printf("shortIntVar %%hx (0x_[a-f]_) = %hx\n", shortIntVar);
  printf("shortIntVar %%hX (0X_[A-F]_) = %hX\n", shortIntVar);
  printf("shortIntVar %%ho (0o_______) = %ho\n", shortIntVar);
  printf("longIntVar %%li (_________) = %li\n", longIntVar);
  printf("longIntVar %%lo (0o_______) = %lo\n", longIntVar);
  printf("longIntVar %%lx (0x_______) = %lx\n", longIntVar);
  printf("longIntVar %%lX (0X_______) = %lX\n", longIntVar);
  printf("unsignedLongIntVar %%lu (_________) = %lu\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lx (0x_______) = %lx\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lX (0X_______) = %lX\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lo (0o_______) = %lu\n", unsignedLongIntVar);
  printf("longLongIntVar %%llu (_________) = %llu\n", longLongIntVar);
  printf("longLongIntVar %%llx (0x_______) = %llx\n", longLongIntVar);
  printf("longLongIntVar %%llo (0o_______) = %llo\n", longLongIntVar);
  printf("unsignedLongLongIntVar %%llu (_________) = %llu\n", unsignedLongLongIntVar);
  printf("unsignedLongLongIntVar %%llx (0x_______) = %llx\n", unsignedLongLongIntVar);
  printf("unsignedLongLongIntVar %%llo (0o_______) = %llo\n", unsignedLongLongIntVar);
  printf("floatingVar = %f\n", floatingVar);
  printf("floatingVar %%e = %e\n", floatingVar);
  printf("floatingVar %%E = %E\n", floatingVar);
  printf("floatingVar %%g = %g\n", floatingVar);
  printf("floatingVar %%G = %G\n", floatingVar);
  printf("floatingVar %%a = %a\n", floatingVar);
  printf("floatingVar %%A = %A\n", floatingVar);
  printf("abbrev. floatingVar = %0.5f\n", floatingVar);
  printf("doubleVar %%e = %e\n", doubleVar);
  printf("doubleVar %%E = %E\n", doubleVar);
  printf("doubleVar %%g = %g\n", doubleVar);
  printf("doubleVar %%G = %G\n", doubleVar);
  printf("doubleVar %%lf = %lf\n", doubleVar);
  printf("longDoubleVar = %Lf\n", longDoubleVar);
  printf("longDoubleVar %%Le = %Le\n", longDoubleVar);
  printf("longDoubleVar %%Lg = %Lg\n", longDoubleVar);
  printf("longDoubleVar %%La = %La\n", longDoubleVar);
  printf("longDoubleVar %%LA = %LA\n", longDoubleVar);
  printf("charVar = %c\n", charVar);
  printf("signedIntVar = %d\n", signedIntVar);
  printf("signedIntVar %%i = %i\n", signedIntVar);
  printf("signedIntShortVar = %hi\n", signedIntShortVar);
  printf("unsignedIntVar = %u\n", unsignedIntVar);
  printf("unsignedShortIntVar = %hu\n", unsignedShortIntVar);
  
  printf("boolVar = %i\n", boolVar);
  printf("newBool = %i\n", newBool);
  printf("newBool %%u = %u\n", newBool);

  return 0;
}