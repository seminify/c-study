#include <stdio.h>

int main(void) {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *fptr = &arr[0];
    int *rptr = &arr[5];
    int i, temp;
    for (i = 0; i < 3; i++) {
        temp = *fptr;
        *fptr = *rptr;
        *rptr = temp;
        fptr += 1;
        rptr -= 1;
    }
    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    return 0;
}
