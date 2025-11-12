#include <stdio.h>

bool primzahl(int input, int i) {
    if (i == 1) return true;
    if (input % i == 0) return false;
    return primzahl(input, i-1);
}

int main() {
    int input = 90000;
    int is_primzahl = primzahl(input, input-1);

    printf("Zahl: %d Primzahl: %s", input, is_primzahl ? "true" : "false");
}
