#include <stdio.h>

int main() {
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    printf("Size of int is: %u bytes", sizeof(integerType));
    printf("\nSize of float is: %u bytes", sizeof(floatType));
    printf("\nSize of double is: %u bytes", sizeof(doubleType));
    printf("\nSize of char is: %u bytes", sizeof(charType));

    return 0;
}
