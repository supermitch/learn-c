#include <stdio.h>

int main() {
    int c, prev;
    prev = 'x';
    c = getchar();
    while (c != EOF) {
        if (c == ' ')
            if (prev == ' ')
                ;
            else
                putchar(c);
        else
            putchar(c);
        prev = c;
        c = getchar();
    }
}
