#import <limits.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int int_min = INT_MIN;
    int int_max = INT_MAX;
    int int_size = INT_WIDTH;

    int test = INT_MAX+1;

    printf("%d %d %d %d", int_min, int_max, int_size, test);

    return 0;
}
