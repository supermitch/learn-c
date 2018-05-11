#include <stdio.h>

#define LOWER 0
#define UPPER 300  /* Upper temp limit */
#define STEP 20  /* step size */

int main () {
    printf("Deg. F\tDeg.C\n");
    for (float fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}
