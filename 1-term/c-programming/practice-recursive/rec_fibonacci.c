#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("%d\n", fibonacci(8));

    int fib_index = 8;

    int fib = 0;
    int last_fib = 0;
    int pre_last_fib = 0;
    for (int i = 1; i <= fib_index; ++i) {
        fib = pre_last_fib + last_fib ?: 1;
        last_fib = pre_last_fib;
        pre_last_fib = fib;
    }
    printf("%d", fib);

    return 0;
}