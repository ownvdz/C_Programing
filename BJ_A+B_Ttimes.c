#include<stdio.h>
int main(void) {

    int T;
    scanf("%d", &T);
    int a[T], b[T];

    for(int i=0; i<T; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i=0; i<T; i++) {
        printf("Case #%d: %d + %d = %d\n", i+1, a[i], b[i], a[i] + b[i]);
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
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a + b);
    }

    return 0;
}
2023-04-06
*/
