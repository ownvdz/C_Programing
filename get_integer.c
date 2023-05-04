#include<stdio.h>

int get_integer(void);
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);


int main(void) {

    int x,y;

    x=get_integer();
    y=get_integer();

    printf("두 수의 합 : %d", add(x, y));

    return 0;
}

int get_integer(void) {

    int value;

    printf("정수를 입력하시오: ");
    scanf("%d", &value);

    return value;
}

int add(int x, int y) {
    return x+y;
}

int minus(int x, int y) {
    return x-y;
}

int multi(int x, int y) {
    return x*y;
}

int div(int x, int y) {
    return x/y;
}
//2023-05-04