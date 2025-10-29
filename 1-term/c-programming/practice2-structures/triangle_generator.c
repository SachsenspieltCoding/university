#include <stdio.h>

int main() {

    int size;

    printf("Triangle Generator\n");
    printf("Number of Lines:");
    scanf("%d", &size);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}
