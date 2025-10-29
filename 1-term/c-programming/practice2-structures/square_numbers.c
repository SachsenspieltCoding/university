//
// Created by finnmargraf on 10/29/25.
//

#include <stdio.h>

int main() {
    // Method 1
    printf("Method 1: \n");
    for (int i = 1; i <= 20; ++i) {
        printf("%d\n", i*i);
    }

    // Method 2
    printf("\n\nMethod 2: \n");
    int i = 1;
    while (i <= 20) {
        printf("%d\n", i*i);
        i++;
    }

    // Method 3
    printf("\n\nMethod 3: \n");
    int j = 1;
    do {
        printf("%d\n", j*j);
        j++;
    } while (j <= 20);

    return 0;
}
