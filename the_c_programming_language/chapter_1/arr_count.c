#include <stdio.h>

int main() {

    int i, c, nwhite, nother;
    nwhite = nother = 0;
    int ndigits[10];

    for (i = 0; i < 10; ++i)
        ndigits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else if (c >= '0' && c <= '9')
            ++ndigits[c-'0'];
        else
            ++nother;
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigits[i]);
    printf(", whitespace = %d, other = %d\n", nwhite, nother);
}
