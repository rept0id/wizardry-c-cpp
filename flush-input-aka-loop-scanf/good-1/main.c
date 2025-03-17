#include <stdio.h>

#ifdef __gnu__
    #include <stdio_ext.h>  // for __fpurge(stdin)
#elif defined(_WIN32) || defined(_WIN64)
    #include <windows.h>    // for _flushall()
#endif

/*** * * ***/

int x;

/*** * * ***/

int main() {
    while (1) {
        printf("Please provide an integer: ");

        if (scanf("%d", &x) == 1) {
            break;
        } else {
            #ifdef __gnu__
                __fpurge(stdin);
            #elif defined(_WIN32) || defined(_WIN64)
                _flushall();
            #endif
        }
    }

    /*** * * ***/

    printf("You provided: %d\n", x);

    return 0;
}
