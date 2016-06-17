#include <stdio.h>

#define ArrayConstant int[1, 2, 3, "A"];

enum textSymbols{ONE = 1, TWO, THREE};

void printHello();

main()
{
  printHello();
}

/*Prints Hello!*/
void printHello(){
  printf("Hello!\n");
}
