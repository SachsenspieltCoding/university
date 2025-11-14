#include <stdio.h>

int divide(int divident, int divisor) {
    if (divident < divisor) return 0;
    return divide(divident - divisor, divisor) + 1;
}

int main(int argc, char *argv[]) {
    int rec_divident = 23;
    int rec_divisor = 3;
    int rec_quotient = divide(rec_divident, rec_divisor);
    int rec_rest = rec_divident - rec_quotient * rec_divisor;

    printf("%d %d\n", rec_quotient, rec_rest);

    int divident = 23;
    int divisor = 3;

    int quotient = 0;
    int rest = divident;

    for (int i = 1; i < divident; ++i) {
        if (rest < divisor) break;
        rest -= divisor;
        quotient++;
    }

    printf("%d %d", quotient, rest);

    return 0;
}
