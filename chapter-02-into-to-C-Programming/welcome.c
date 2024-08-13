//A first Program in C 

#include <stdio.h>

int main(void){
  printf("Welcome to C \n");
  return 0;
}

// Compilation gcc -std=c18 welcome.c
//
// # include <stdio.h> --> is a C Preprocessor directive.
// The Linker and the Executables
// --------------------------------
// When compiling a printf statement, the compiler merely provides space in the
// object program for a "call" to the library function.When the linker runs, it
// locates the libray finctions and inserts the proper calls to these functions
// in the object program.
