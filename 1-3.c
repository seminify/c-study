#include <stdio.h>

// 아래의 배열은 전역으로 선언되었으므로 자동 0으로 초기화
int record[5][5]; // 학생들의 성적을 저장하기 위한 배열
/* 학생별 성적의 입력 */
void WriteRecord(void) {
    int sum; // 학생별 성적 합계
    int i, j;
    for (i = 0; i < 4; i++) {
        sum = 0;
        printf("%d번째 학생의 성적 입력\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("과목 %d : ", j + 1);
            scanf("%d", &record[i][j]);
            sum += record[i][j];
        }
        record[i][4] = sum;
    }
}

/* 과목별 성적의 합계 입력 */
void WriteSumRecord(void) {
    int sum = 0; // 과목별 성적 합계
    int i, j;
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 4; j++)
            sum += record[j][i];
        record[4][i] = sum;
        record[4][4] += sum;
    }
}

/* 배열에 저장된 값 전체 출력 */
void ShowAllRecord(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%3d", record[i][j]);
        printf("\n");
    }
}

int main(void) {
    WriteRecord();
    WriteSumRecord();
    ShowAllRecord();
    return 0;
}
