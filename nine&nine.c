#include<stdio.h>
int main(void){

    int n;
    int i = 1;

    printf("출력하고 싶은 단: ");
    scanf("%d", &n);
    while (1) {
        printf("%d * %d = %d\n", n, i, n*i);
        
        if(i==9){
            break;
        }

        i++;
    }
    
    return 0;
}
//2023-04-06