#include <ctype.h>
#include <stdio.h>
#include <string.h>

void square(int size) {
    // TODO: MAGIC
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {

        }
    }
}

void triangle(int size) {
    // TODO: MAGIC
}

int main() {
    int size;
    char form[100];

    printf("Größe: ");
    scanf("%d", &size);

    printf("Form (quadrat, dreieck): ");
    scanf("%s", &form);

    // TODO: Check lower/uppercase of user input
    if (!strcmp(form, "quadrat")) {
        square(size);
    } else if (!strcmp(form, "dreieck")) {
        triangle(size);
    }

    return 0;
}