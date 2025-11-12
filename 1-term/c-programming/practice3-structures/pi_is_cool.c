#include <math.h>
#include <stdio.h>
double pi = M_PI;

int main() {
    int int_pi = pi;
    char char_pi = pi;

    printf("Float: %f Decimal: %d Char: %c", pi, int_pi, char_pi);

    return 0;
}