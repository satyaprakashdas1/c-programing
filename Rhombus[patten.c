//C Program to Print Number Pattern(Rhombusnumber pattern)
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");
        for (int k = 0; k < n; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}
