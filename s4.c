#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strrev(char *str) {
    int len = strlen(str);
    char *rev = (char *)malloc
      (sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    return rev;
}
void isPalindrome(char *str) {
    char *rev = strrev(str);
    if (strcmp(str, rev) == 0)
        printf("\"%s\" is palindrome.\n",
               str);
    else
        printf("\"%s\" is not palindrome.\n",
               str);
}

int main() {
    isPalindrome("madam");
      isPalindrome("hello");

    return 0;
}
