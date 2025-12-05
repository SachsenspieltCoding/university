#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[100];
    fgets(buffer, 100, stdin); // TODO: read until buffer is clear (input is longer than 100 bytes)

    if (buffer[0] == '\n') {
        printf("Fehler: Keine Eingabe");
        return 1;
    }

    char *endptr;
    long parsed_value = strtol(buffer, &endptr, 10);

    /**
     * GOOD:
     * - val != 0 && endptr == LF
     * - val = 0 && endptr == LF
     *
     * WARN:
     * - val != 0 && endptr != LF
     *
     * BAD:
     * - val = 0 && endptr != LF
     */

    if (parsed_value == 0 && *endptr != '\n') {
        printf("\nDu fatzke hast wat falsch jemacht:\n");
        printf("%d", errno);
        return 1;
    }

    if (*endptr != '\n') {
        printf("\nACHTUNG: Fehlerhafte Eingabe, benutze %ld", parsed_value);
        return 0;
    }

    printf("\nAllet Jut Jemacht!\n");
    printf("%ld", parsed_value);
    return 0;
}
