#include<stdio.h>
int main(void) {

    int a, b;

    printf("분자와 분모를 입력하시오 : ");
    scanf("%d %d", &a, &b);

    if(b == 0) {
        printf("0으로 나눌 수 없습니다.");
    } else {
        printf("결과는 %d입니다.", a/b);
    }
}
//2023-04-27