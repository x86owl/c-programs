#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int number = 0;
    printf("Enter the number of players: ");
    fscanf(stdin,"%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL){
        printf("Memory allocation faild!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter score #%d: ", i+1);
        fscanf(stdin,"%d", &scores[i]);
    }

    for(int i = 0; i < number; i++){
        printf("scores: %d\n", scores[i]);
    }

    free(scores);
    scores = NULL;

    return EXIT_SUCCESS;
}