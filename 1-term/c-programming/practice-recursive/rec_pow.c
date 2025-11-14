#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) return 1;
    return power(base, exponent - 1) * base;
}

int main() {
    printf("%d\n", power(2, 10));

    int base = 2;
    int exponent = 10;
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    printf("%d", result);

    return 0;
}
