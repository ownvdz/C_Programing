#include<stdio.h>
int main(void) {
    int sum=0, num, i=0;
    while (i<5) {
        printf("값을 입력하시오: ");
        scanf("%d", &num);
        sum += num;
        i++;
    }
    printf("합계는 %d입니다.", sum);
    return 0;
}
//2023-04-06