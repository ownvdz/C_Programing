#include<stdio.h>
int main(void) {

    double w, h, area, perimeter;

    printf("사각형의 길이 : ");
    scanf("%lf", &w);
    printf("사각형의 높이 : ");
    scanf("%lf", &h);
    area=w*h;
    perimeter = 2* (w+h);
    
    printf("사각형의 넓이 : %f \n사각형의 둘레 : %f", area, perimeter);

    return 0;
}
//2023-04-27