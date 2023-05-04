#include <stdio.h>

void SimpleFuncOne(int *ar1, int *ar2);

void SimpleFuncTwo(int (*ar3)[4], int (*ar4)[4]);

int main(void) {
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];
    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);
    return 0;
}
