#include<stdio.h>
int main(void) {
    int A,B;
    while(1){
        scanf("%d %d", &A, &B);
        if(A==0 && B==0) {
            break;
        }
        printf("%d\n", A+B);
        return 0;
    }
}

/*
#include<stdio.h>
int main(void) {
    int A,B, i=0, Num[10];
    while(1){
        scanf("%d %d", &A, &B);
        if(A==0 && B==0) {
            break;
        }
        Num[i]=A+B;
        i++;
    }
    int j=i;
    for(i;i>0;i--) {
        printf("%d\n", Num[j-i]);
    }
    return 0;
}
2023-04-13
*/