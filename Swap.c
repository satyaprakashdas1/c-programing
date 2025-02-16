#include <stdio.h>

int main() {
    int a = 15, b = 20, swap;

    // Swapping values of a and  b
    swap = a;
    a = b;
    b = swap;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}