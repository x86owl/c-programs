#include <stdio.h>
#include <stdlib.h>

//Break == Break out of the loop(STOP)
//Contiue == skip current cycle of a loop (SKIP)

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;
        else if (i == 9) break;

        fprintf(stdout,"%d\n", i);
    }

    return EXIT_SUCCESS;
}
