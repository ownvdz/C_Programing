#include<stdio.h>

int factorial(int x);

int main(void) {

    int num;
    printf("알고 싶은 팩토리얼의 값은 : ");
    scanf("%d", &num);

    printf("%d!의 값은 %d입니다.", num, factorial(num));

    return 0; 
}

int factorial(int x) {
    int fact=1;
    for(int i=1; i<=x; i++) {
        fact*=i;
    }
    return fact;
}
//2023-05-04