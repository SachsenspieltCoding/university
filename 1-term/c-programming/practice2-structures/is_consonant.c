#include <ctype.h>
#include <stdio.h>

int main() {
    char input;

    printf("Is this letter a consonant?");
    scanf("%c", &input);

    switch (toupper(input)) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is not a consonant", input);
            break;

        default:
            printf("%c is a consonant", input);
            break;
    }

    return 0;
}
