#include <stdio.h>

int main() {

    char input[100];

    printf("Is this word a palindrome? (max 100 char)");
    scanf("%s", &input);

    int length;
    for (length = 1; length < 100; ++length) {
        if (input[length-1] == 0)
            break;
    }
    length--;

    for (int i = 0; i < length; ++i) {
        if (input[i] != input[length-i-1]) {
            printf("This is NOT a palindrome: %s", input);
            return 0;
        }
    }

    printf("This is a palindrom: %s", input);

    return 0;
}
