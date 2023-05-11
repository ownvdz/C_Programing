#include<stdio.h>

int A;
int some(int A);
int main() {

    int A=3;
    some(A);

    printf("%d", A);
}

int some(int A){
    ++A;
    A*2;
    return A;
}
//2023-05-11