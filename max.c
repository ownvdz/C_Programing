#include<stdio.h>
int max(int x, int y);

int main(void) {
    int x, y, larger;
    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    larger = max(x, y);
    printf("더 큰 값은 %d입니다. \n", larger);
    return 0;
}

int max(int x, int y) {
    return x>y ? x: y;
}
//2023-04-13