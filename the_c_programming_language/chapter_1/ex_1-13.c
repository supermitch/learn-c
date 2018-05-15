#include <stdio.h>

#define OUT 1  // word state
#define IN 0
#define MAX_LEN 25  // Maximum word length

int main() {

    int i, j, c, wordlen, state;
    int wc[MAX_LEN];

    i = j = c = wordlen = 0;
    state = OUT;

    for (i = 0; i < MAX_LEN; ++i)
        wc[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (wordlen < MAX_LEN)
                    ++wc[wordlen];
                else
                    printf("Found a %d+ char word!\n", MAX_LEN);
            }
            state = OUT;
            wordlen = 0;
        } else {
            state = IN;
            ++wordlen;
        }
    }

    printf("Word histogram:\n");
    for (i = 0; i < MAX_LEN; ++i) {
        printf("%3d ", i);
        for (j = 0; j < wc[i]; ++j) {
            printf("█");
        }
        printf("\n");
    }

    return 0;
}
