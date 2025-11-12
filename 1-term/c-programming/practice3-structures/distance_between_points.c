#include <math.h>
#include <stdio.h>

double deg_to_rad(double deg) {
    return (deg * M_PI / 180.0);
}

double rad_to_deg(double rad) {
    return (rad * 180.0 / M_PI);
}

int main() {

    struct point {
        double x;
        double y;
    };

    struct point p1;
    struct point p2;

    printf("Point 1:\n");
    scanf("%lf", &p1.x);
    scanf("%lf", &p1.y);
    printf("Point 2:\n");
    scanf("%lf", &p2.x);
    scanf("%lf", &p2.y);

    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("%d %d %d %d\n", p1.x, p1.y, p2.x, p2.y);
    printf("%f", distance);

    return 0;
}
