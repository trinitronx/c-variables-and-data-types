/*
 * Author: James Cuzella
 * Copyright 2022 James Cuzella
 * Purpose: This program uses basic data types
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

int main(void) {
  int integerVar = 100;
  short int shortIntVar = 30;  // NOLINT
  signed int signedIntVar = -99;
  signed short int signedIntShortVar = -1;  // NOLINT
  unsigned int unsignedIntVar = 1;
  unsigned short int unsignedShortIntVar = 2;             // NOLINT
  long int longIntVar = 122L;                             // NOLINT
  long long int longLongIntVar = 500ll;                   // NOLINT
  unsigned long int unsignedLongIntVar = 122e15L;         // NOLINT
  unsigned long long int unsignedLongLongIntVar = 12ull;  // NOLINT
  uint32_t uInt32Var = 0x3a3a3a;
  float floatingVar = 331.7900000;
  double doubleVar = 8.44e+11;
  long double longDoubleVar = 3.1e-51;
  char charVar = 'W';

  _Bool boolVar = 0;
  bool newBool = true;

  enum primaryColor { red, yellow, blue };
  enum primaryColor myColor = red, yourColor = blue;
  enum month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
  };
  enum month thisMonth = February;
  enum direction { up, down, left = 10, right };
  enum direction myDirection = left;
  enum direction yourDirection = right;

  char *myString = "hello world";

  printf("integerVar = %i\n", integerVar);
  printf("integerVar %%x (0x__) = %x\n", integerVar);
  printf("integerVar %%o (0o__) = %o\n", integerVar);
  printf("shortIntVar %%hi = %hi\n", shortIntVar);
  printf("longIntVar %%li (_________) = %li\n", longIntVar);
  printf("longIntVar %%lo (0o_______) = %lo\n", longIntVar);
  printf("longIntVar %%lx (0x_______) = %lx\n", longIntVar);
  printf("longIntVar %%lX (0X_______) = %lX\n", longIntVar);
  printf("unsignedLongIntVar %%lu (_________) = %lu\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lx (0x_______) = %lx\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lX (0X_______) = %lX\n", unsignedLongIntVar);
  printf("unsignedLongIntVar %%lo (0o_______) = %lu\n", unsignedLongIntVar);
  printf("longLongIntVar %%lli (_________) = %lli\n", longLongIntVar);
  printf("longLongIntVar %%llx (0x_______) = %llx\n", longLongIntVar);
  printf("longLongIntVar %%llo (0o_______) = %llo\n", longLongIntVar);
  printf("unsignedLongLongIntVar %%llu (_________) = %llu\n",
         unsignedLongLongIntVar);
  printf("unsignedLongLongIntVar %%llx (0x_______) = %llx\n",
         unsignedLongLongIntVar);
  printf("unsignedLongLongIntVar %%llo (0o_______) = %llo\n",
         unsignedLongLongIntVar);
  printf("uInt32Var %%lli (_________) = %lli\n", uInt32Var);
  printf("uInt32Var %%llx (0x_______) = %llx\n", uInt32Var);
  printf("uInt32Var %%llo (0o_______) = %llo\n", uInt32Var);
  printf("uInt32Var %%llu (_________) = %llu\n", uInt32Var);
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
  printf("unsignedShortIntVar %%hx (0x_[a-f]_) = %hx\n", unsignedShortIntVar);
  printf("unsignedShortIntVar %%hX (0X_[A-F]_) = %hX\n", unsignedShortIntVar);
  printf("unsignedShortIntVar %%ho (0o_______) = %ho\n", unsignedShortIntVar);

  printf("boolVar = %i\n", boolVar);
  printf("newBool = %i\n", newBool);
  printf("newBool %%u = %u\n", newBool);

  printf("myColor %%i = %i\n", myColor);

  printf("yourColor %%i = %i\n", yourColor);
  printf("thisMonth %%i = %i\n", thisMonth);
  printf("myDirection %%i = %i\n", myDirection);
  printf("yourDirection %%i = %i\n", yourDirection);

  printf("myString = %s", myString);
  return 0;
}
