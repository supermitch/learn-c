#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0

int main() {
    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("chars: %d, words: %d, lines: %d\n", nc, nw, nl);
}
