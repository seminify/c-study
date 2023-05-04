#include <stdio.h>

int main(void) {
    int kor, eng, math;
    double avr;
    printf("국어, 영어, 수학의 성적 입력 : ");
    scanf("%d %d %d", &kor, &eng, &math);
    avr = (kor + eng + math) / 3.0;
    if (avr >= 90.0)
        printf("A!\n");
    else if (avr >= 80.0)
        printf("B!\n");
    else if (avr >= 70.0)
        printf("C!\n");
    else if (avr >= 50.0)
        printf("D!\n");
    else
        printf("F!\n");
    return 0;
}
