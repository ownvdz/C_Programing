#include<stdio.h>
int main(void) {
    int a, b, c, sum, t[10]={0};
    scanf("%d\n%d\n%d", &a, &b, &c);
    sum = a*b*c;
    printf("%d\n", sum);

    while(1) {
        if(sum/10 == 0) {
            t[sum%10]++;
            break;
        } else {
            t[sum%10]++;
            sum /= 10;
        }
    }

    for(int i=0; i<10; i++) {
        printf("%d\n", t[i]);
    }
    
}
//2023-05-25