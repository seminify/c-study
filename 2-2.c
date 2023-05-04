#include <stdio.h>

int main(void) {
    char voca[100];
    int len = 0, i;
    char temp;
    printf("영단어 입력 : ");
    scanf("%s", voca);
    while (voca[len] != '\0') // 영단어의 길이 계산
        len++;
    for (i = 0; i < len / 2; i++) { // 영단어 뒤집기
        temp = voca[i]; // 앞의 문자 임시로 저장
        voca[i] = voca[(len - i) - 1]; // 뒤의 문자를 앞으로
        voca[(len - i) - 1] = temp; // 앞의 문자를 뒤로
    }
    printf("뒤집힌 영단어 : %s\n", voca);
    return 0;
}
