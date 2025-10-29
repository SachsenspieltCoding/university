#include <stdio.h>

int main() {
    int year;

    printf("Is this year a leap year?\n");
    scanf("%d", &year);

    if (!((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) {
        printf("Das Jahr %d ist KEIN Schaltjahr!", year);
        return 0;
    }

    printf("Das Jahr %d ist ein Schaltjahr!", year);
    return 0;
}
