#include<stdio.h>
#include<math.h>
#define PI 3.141592 

double rad(double degree);

void drawbar(int height);

int main(void) {
    int degree, y;
	
	for (degree = 0; degree <= 180; degree += 10) {				//  sin0 부터 sin180까지를 범위로 함 
		y = (int)(60 * sin(rad((double)degree)) + 0.5);			// 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여 증폭 
		drawbar(y);			// 싸인함수의 y값만큼 별을 출력하기 위해 함수 drawbar 사용 
	}

	return 0;
}

double rad(double degree) {
	return PI * degree / 180.0;			//각도 변환 
}

void drawbar(int height) {
	int i;
	for (i = 0; i < height; i++) {
		printf("*");			//받은 y값만큼 별을 출력 
	}
	printf("\n");
}						
//2023-05-15
