#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>

void disp_car(int car_number, int distance);

int main(void) {
    int i;			//�ܼ��� for���� ���� ���� 
	int car1_dist=0, car2_dist=0;			//�ڵ��� 1, 2�� ������ �Ÿ��� �ǹ��ϴ� ���� 
	srand((unsigned)time(NULL));

	for (i=0; i<6; i++) {
		car1_dist += rand() % 100;			//�ڵ���1�� ����Ÿ��� ���������ش�. 
		car2_dist += rand() % 100;			//�ڵ���2�� ����Ÿ��� ���������ش�. 
		disp_car(1, car1_dist);				//�ڵ���1�� ���� ����Ÿ��� ����ϱ����� disp_car�Լ��� ���
		disp_car(2, car2_dist);				//�ڵ���2�� ���� ����Ÿ��� ����ϱ����� disp_car�Լ��� ���
		printf("---------------------\n");			
		_getch();
	}
	
	return 0;
}

void disp_car(int car_number, int distance) {
	int i;
	printf("CAR #%d:", car_number);
	
	for(i=0; i<distance/10; i++ ) {			
		printf("*");						//	�ش� for�������� �ڵ����� ����Ÿ� 10�� �� �ϳ��� ����Ѵ�. 
	}
	printf("\n");

}								
//2023-05-15
