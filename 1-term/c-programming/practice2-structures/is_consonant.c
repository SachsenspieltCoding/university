#include <ctype.h>
#include <stdio.h>

int main() {
    char input;

    printf("Is this letter a consonant?");
    scanf("%c", &input);

    if (!('A' < input && input < 'Z' || 'a' < input && input < 'z')) {
        printf("%c is not a char", input);
        return 0;
    }

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
