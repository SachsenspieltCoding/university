#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}

int main() {
    printf("%d\n", sum(10));

    int it_max = 10;

    int it_sum = 0;

    for (int i = 1; i <= it_max; ++i) {
        it_sum += i;
    }

    printf("%d", it_sum);

    return 0;
}
