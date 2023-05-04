#include <stdio.h>

int main(void) {
    int num, cnt = 0;
    char binArr[30];
    printf("10진수 정수 입력 : ");
    scanf("%d", &num);
    while (num > 0) { // 2진수로 변환.
        binArr[cnt++] = num % 2;
        num /= 2;
    }
    while (cnt > 0) // 2진수 변환 결과 출력
        printf("%d", binArr[--cnt]);
    printf("\n");
    return 0;
}
