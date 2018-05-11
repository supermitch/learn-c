#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        printf("c <%c> is EOF: %d\n", c, c != EOF);  // Ex. 1-6
    }
    printf("c <%c> is EOF: %d\n", c, c != EOF);  // Ex. 1-6
    printf("EOF value: %d\n", EOF);  // Ex. 1-7

    return 0;
}
