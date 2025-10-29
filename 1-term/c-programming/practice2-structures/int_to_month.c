#include <stdio.h>

int main() {

    int input;

    printf("Number to Month\n");
    printf("Please enter your month: \n");
    scanf("%d", &input);

    switch (input) {
        case 1:
            printf("January");
            break;

        case 2:
            printf("February");
            break;

        case 3:
            printf("March");
            break;

        case 4:
            printf("April");
            break;

        case 5:
            printf("May");
            break;

        case 6:
            printf("June");
            break;

        case 7:
            printf("July");
            break;

        case 8:
            printf("August");
            break;

        case 9:
            printf("September");
            break;

        case 10:
            printf("October");
            break;

        case 11:
            printf("November");
            break;

        case 12:
            printf("December");
            break;

        default:
            printf("%d is not a month!", input);
            break;
    }

    const char * months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("\nMore efficient: %s", months[input - 1]);

    return 0;
}
