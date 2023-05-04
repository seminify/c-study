#include <stdio.h>

int main(void) {
    int num, cnt = 0;
    printf("배수의 개수 : ");
    scanf("%d", &num);
    while (cnt++ < num)
        printf("%d ", num * cnt);
    return 0;
}
