#include <stdio.h>

/*** * * ***/

int x;

/*** * * ***/

int main() {
    while ( 1 ) {
        printf("Please provide an integer: ");

        if ( scanf("%d", &x) == 1 ) {
            break;
        }
    }

    printf("You provided: %d\n", x);

    return 0;
}
