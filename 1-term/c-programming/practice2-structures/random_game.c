#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int random = rand() % 10 + 1;
    int choice;

    printf("Random Game\n");
    printf("Pick a number between 1 and 10\n");
    scanf("%d", &choice);

    if (choice == random) {
        printf("You Won!\n");
    } else {
        printf("You Lost!\n");
    }

    printf("Input: %d - Random: %d", choice, random);

    return 0;
}
