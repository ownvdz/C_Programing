#include<stdio.h>
int main(void) {
    int result, year;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if(year%4==0 && year%100 != 0 || year%400==0) {
        result = 1;
    } else {
        result = 0;
    }
    printf("result=%d", result);
}
//2023-04-27