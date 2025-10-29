#include <stdio.h>

int main() {

    int x;
    int y;

    printf("In which quadrant is this coordinate?");
    printf("\n x:");
    scanf("%d", &x);
    printf("\n y:");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        // 1. Quadrant
        printf("Die Koordinaten x: %d und y: %d liegen im 1. Quadrant!", x, y);
    } else if (x < 0 && y > 0) {
        // 2. Quadrant
        printf("Die Koordinaten x: %d und y: %d liegen im 2. Quadrant!", x, y);
    } else if (x < 0 && y < 0) {
        // 3. Quadrant
        printf("Die Koordinaten x: %d und y: %d liegen im 3. Quadrant!", x, y);
    } else if (x > 0 && y < 0) {
        // 4. Quadrant
        printf("Die Koordinaten x: %d und y: %d liegen im 4. Quadrant!", x, y);
    } else {
        // auf Achse
        printf("Die Koordinaten x: %d und y: %d liegen auf den Koordinatenachsen", x, y);
    }

    return 0;
}
