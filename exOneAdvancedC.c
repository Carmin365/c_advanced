#include <stdio.h>

#define PI 3.14159

#ifdef DEBUG
    #define PRINTF(x) printf(x)
#else
    #define PRINTF(x)
#endif

int main() {
    PRINTF("Value of PI: %f\n", PI);
    return 0;
}