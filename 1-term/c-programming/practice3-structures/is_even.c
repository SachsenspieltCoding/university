#include <stdio.h>

int main() {

    int input;
    scanf("%d", &input);

    if (input % 2 == 0) {
        printf("%d is even!", input);
    } else {
        printf("%d is not even!", input);
    }

    return 0;
}
