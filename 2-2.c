#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arrLen = 5; // 초기 배열 길이
    int idx = 0; // 배열 인덱스
    int i;
    int *arr = (int *) malloc(sizeof(int) * arrLen);
    while (1) {
        printf("정수 입력 : ");
        scanf("%d", &arr[idx]);
        if (arr[idx] == -1) // 입력의 종료를 검사
            break;
        if (arrLen == idx + 1) { // 배열의 확장 필요성 검사
            arrLen += 3;
            arr = (int *) realloc(arr, sizeof(int) * arrLen);
        }
        idx++;
    }
    for (i = 0; i < idx; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
