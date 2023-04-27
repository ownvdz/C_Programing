#include<stdio.h>
int main(void) {

    double num1, num2, num3;
    printf("3개의 실수를 입력하시오 : ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    double sum = num1+num2+num3;
    printf("합계 = %.2lf\n", sum);
    printf("평균 = %.2lf", sum/3);
    return 0;
}
//2023-04-27