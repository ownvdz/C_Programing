#include<stdio.h>
int main(void) {
    int i = 10;
    int* p;
    p = &i;
    *p = 5;

    printf("%d\n", i);

    return 0;
}
//2023-05-25