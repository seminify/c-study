#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mystory.txt", "wt");
    fputs("#이름 : semiinify\n", fp);
    fputs("#주민번호 : 123456-7890000\n", fp);
    fputs("#전화번호 : 010-1234-5678\n", fp);
    fclose(fp);
    return 0;
}
