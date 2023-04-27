#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {

    float r;
    printf("반지름을 입력하시오 : ");
    scanf("%f", &r);

    float s=r*r*3.14;
    printf("원의 면적 : %f", s);
    return 0;
}
//2023-04-27