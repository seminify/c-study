#include <stdio.h>

int main(void) {
    char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int arrLen = sizeof(str) / sizeof(char);
    int i;
    for (i = 0; i < arrLen; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
