/*
 * Author: James Cuzella
 * Copyright 2022 James Cuzella
 * Purpose: This program calculates the perimeter and area of a rectangle
 * Date: 2022-02-01
 */

#ifdef __APPLE__
// IWYU pragma: no_include "<_ctype.h>"
#include <_ctype.h>  // for isdigit
#else
#include <ctype.h>  // IWYU pragma: keep
                    // for isdigit
#endif
#include <stdio.h>   // for printf
#include <stdlib.h>  // for strtod

const char* red = "\033[0;31m";
const char* reset = "\033[0m";
const unsigned short int ERR_PARSE = -1;  // NOLINT / ERR_PARSE = 65535

double parseDouble(char* p) {
  while (*p) {  // While there are more characters to process...
    if (isdigit(*p) || ((*p == '-' || *p == '+') && isdigit(*(p + 1)))) {
      // Found a number
      double val = strtod(p, &p);   // Read number
      printf("Parsed: %g\n", val);  // and print it.
      return val;
    } else {
      // Otherwise, move on to the next character.
      p++;
    }
  }
  printf("%sERROR:%s Could not parse input %s\n", red, reset, p);
  return ERR_PARSE;
}

int main(int argc, char* argv[]) {
  double width, height, perimeter, area;
  printf("ERR_PARSE: %u\n", ERR_PARSE);
  printf("Found %d args\n", argc - 1);

  if (argc == 3) {
    height = parseDouble(argv[1]);
    width = parseDouble(argv[2]);
    if (height == ERR_PARSE || width == ERR_PARSE) {
      printf("%sERROR:%s Invalid input!\n", red, reset);
      return 2;
    }
    printf("You passed: height=%g width=%g\n", height, width);
  } else {
    printf("%sERROR:%s You must pass exactly 2 arguments: height width\n", red,
           reset);
    return 1;
  }

  perimeter = 2 * (width + height);
  area = width * height;

  printf("Rectangle of %gx%g has perimeter: %g\n", height, width, perimeter);
  printf("Rectangle of %gx%g has area: %g\n", height, width, area);
}
