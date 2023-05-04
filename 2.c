#include <stdio.h>
#include <stdlib.h>

#define LEN 30
typedef struct _book {
    char author[LEN];
    char title[LEN];
    int page;
} book;

void ClearLineFromReadBuffer(void);

int main(void) {
    book *list[3];
    int i;
    printf("도서 정보 입력\n");
    for (i = 0; i < 3; i++) { // 데이터 입력
        book *pBook = (book *) malloc(sizeof(book) * 1);
        printf("저자 : ");
        fgets(pBook->author, LEN, stdin);
        printf("제목 : ");
        fgets(pBook->title, LEN, stdin);
        printf("페이지 수 : ");
        scanf("%d", &(pBook->page));
        ClearLineFromReadBuffer();
        list[i] = pBook;
    }
    printf("도서 정보 출력\n");
    for (i = 0; i < 3; i++) { // 데이터 출력
        printf("book %d\n", i + 1);
        printf("저자 : %s\n", list[i].author);
        printf("제목 : %s\n", list[i].title);
        printf("페이지 수 : %d\n", list[i].page);
    }
    return 0;
}

void ClearLineFromReadBuffer(void) {
    while (getchar() != '\n');
}
