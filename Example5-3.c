#include<stdio.h>
int main(void) {

    int score;

    printf("성적을 입력하시오 : ");
    scanf("%d", &score);

    if(score >= 90) {
        printf("A학점");
    } else if (score >= 80) {
        printf("B학점");
    } else if (score >= 70) {
        printf("C학점");
    } else if (score >= 60) {
        printf("D학점");
    } else {
        printf("F학점");
    }
}
//2023-04-27