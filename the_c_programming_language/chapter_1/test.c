#include <stdio.h>
#include <inttypes.h>


int main() {
    int a;
    printf("a address: %p\n", &a);

    int *p1 = &a;
    printf("p1 refer: %p\n", p1);
    printf("p1 value: %u\n", *p1);

    a = 5;

    printf("p1 refer: %p\n", p1);
    printf("p1 value: %u\n", *p1);

    printf("0x%" PRIXPTR "\n", (uintptr_t)p1);
}
