#include<stdio.h>
int main() {
    int score[5], sum=0;

    for(int i=0; i<5; i++) {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &score[i]);
        sum+=score[i];
    }
    printf("성적 평균 = %d", sum/5);
    return 0;
}
//2023-05-18
