#include <stdio.h>

int main(void) {
    char voca[100];
    int len = 0, i;
    char max = 0;
    printf("영단어 입력 : ");
    scanf("%s", voca);
    while (voca[len] != '\0') // 영단어의 길이 계산
        len++;
    for (i = 0; i < len; i++)
        if (max < voca[i])
            max = voca[i];
    printf("가장 큰 아스키 코드 값의 문자 : %c\n", max);
    return 0;
}
