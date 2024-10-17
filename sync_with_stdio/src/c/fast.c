#include <stdio.h>
#include <stdlib.h>

int main() {
    char *x = NULL;
    size_t lenX = 0;

    while (getline(&x, &lenX, stdin) != -1);

    free(x);
    return 0;
}
