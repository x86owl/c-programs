#include <stdio.h>
#include <stdlib.h>

// This script is used to showcase the Variable Scope
// outside of function is called global scope
// inside of the function is called local scope
// Better to use local scope in c  | don't use global cause (hard to debug it)

int add(int x, int y){
    return x + y;
}

int main(int argc, char *agrv[]) { 
    int x = 39, y = 49;;
    int result;

    puts("Initialized two numbers");

    result = add(x, y);
    fprintf(stdout, "Result  %d\n", result);

    return EXIT_SUCCESS;
}