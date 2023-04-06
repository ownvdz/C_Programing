#include<stdio.h>
int main(void) {

    int T;
    scanf("%d", &T);
    int a[T], b[T];

    for(int i=0; i<T; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i=0; i<T; i++) {
        printf("%d\n", a[i] + b[i]);
    }

    return 0;
}
//2023-04-06


/*
#include<stdio.h>
int main(void) {

    int T, a, b;
    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
2023-04-06
*/