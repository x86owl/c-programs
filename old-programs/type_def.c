#include <stdio.h>
#include <stdlib.h>

typedef int numbers;
typedef char strings[15];
typedef char shells[8];

int main(int argc, char *argv[]) {     
    numbers x = 5;
    numbers y = 8;
    numbers z = x + y;
    fprintf(stdout, "%d\n", z);

    strings name = "x86owl";
    fprintf(stdout,"%s\n", name);

    shells user1 = "bash";
    fprintf(stdout,"%s\n", user1);

    return EXIT_SUCCESS;
}