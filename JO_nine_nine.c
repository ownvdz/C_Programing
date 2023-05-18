#include<stdio.h>
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    while(1) {
        if((num1<2||num2<2) || (num1>9||num2>9)) {
            printf("INPUT ERROR!\n");
            scanf("%d %d", &num1, &num2);
        } else {
            break;
        }
    }

    for(int i=1; i<10; i++) {
        if(num1>num2) {
            for(int j=num1; j>=num2; j--) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
        } else if(num1<num2) {
            for(int j=num1; j<=num2; j++) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
        } else {
            printf("%d * %d = %2d   ", num1, i, num1*i);
        }
        printf("\n");
    }
    

    return 0;
}
