#include <stdio.h>

int main() {
    int c, nlines;
    nlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nlines;
    }
    printf("%d\n", nlines);
}
