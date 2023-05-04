#include <stdio.h>

int main(void) {
    int dan = 0, num = 1;
    printf("몇 단? ");
    scanf("%d", &dan);
    do {
        printf("%d × %d = %d\n", dan, num, dan * num);
        num++;
    } while (num < 10);
    return 0;
}
