#include<stdio.h>
int main() {
    int scores[5];

    for(int i=0; i<5; i++) {
        scores[i]=(i+1)*10;
        printf("scores[%d]=%d\n", i, scores[i]);
    }

    return 0;
}
//2023-05-18