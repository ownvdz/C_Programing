#include<stdio.h>
#include<math.h>
#define PI 3.141592 

double rad(double degree);

void drawbar(int height);

int main(void) {
    int degree, y;
	
	for (degree = 0; degree <= 180; degree += 10) {				//  sin0 ���� sin180������ ������ �� 
		y = (int)(60 * sin(rad((double)degree)) + 0.5);			// ���ΰ��� -1.0���� 1.0�̹Ƿ� ������ �ݿø��Ͽ� ���� 
		drawbar(y);			// �����Լ��� y����ŭ ���� ����ϱ� ���� �Լ� drawbar ��� 
	}

	return 0;
}

double rad(double degree) {
	return PI * degree / 180.0;			//���� ��ȯ 
}

void drawbar(int height) {
	int i;
	for (i = 0; i < height; i++) {
		printf("*");			//���� y����ŭ ���� ��� 
	}
	printf("\n");
}						
//2023-05-15
