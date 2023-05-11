#include<stdio.h>

int is_prime(int n) {
    int count = 0;
    for(int i=2; i<=n; i++) {
        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                count++;
            }
        }
        if(count == 0){
            printf("%d ", i);
        }
        count = 0;
    }
}

int main() {
    int n;
    printf("정수 n을 입력하세요 : ");
    scanf("%d", &n);

    printf("정수 n보다 작은 소수 : ");
    is_prime(n);

    return 0;
}
//2023-05-11