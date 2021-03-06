/*
 * Author: James Cuzella
 * Copyright 2022 James Cuzella
 * Purpose: This program handles basic command line args
 * Date: 2022-02-01
 */

#include <stdio.h>

int main(int argc, const char* argv[]) {
  int numberOfArguments = argc;
  const char* argument0 = argv[0];
  const char* argument1 = argv[1];

  printf("Number of Arguments: %d\n", numberOfArguments);
  printf("Argument 0 is the program name: %s\n", argument0);
  printf("Argument 1 is the command line argument: %s\n", argument1);

  return 0;
}
