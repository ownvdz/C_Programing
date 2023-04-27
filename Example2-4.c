#include<stdio.h>
int main(void) {

    int won;
    double rate, usd;
    printf("환율을 입력하시오 : ");
    scanf("%lf", &rate);

    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &won);

    usd = won/rate;
    printf("원화 %d원은 %lf달러입니다.", won, usd);

    return 0;
}
//2023-04-27