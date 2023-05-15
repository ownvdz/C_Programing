#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>

void disp_car(int car_number, int distance);

int main(void) {
    int i;			//단순한 for문을 위한 변수 
	int car1_dist=0, car2_dist=0;			//자동차 1, 2가 주행한 거리를 의미하는 변수 
	srand((unsigned)time(NULL));

	for (i=0; i<6; i++) {
		car1_dist += rand() % 100;			//자동차1의 주행거리를 누적시켜준다. 
		car2_dist += rand() % 100;			//자동차2의 주행거리를 누적시켜준다. 
		disp_car(1, car1_dist);				//자동차1의 누적 주행거리를 출력하기위해 disp_car함수를 사용
		disp_car(2, car2_dist);				//자동차2의 누적 주행거리를 출력하기위해 disp_car함수를 사용
		printf("---------------------\n");			
		_getch();
	}
	
	return 0;
}

void disp_car(int car_number, int distance) {
	int i;
	printf("CAR #%d:", car_number);
	
	for(i=0; i<distance/10; i++ ) {			
		printf("*");						//	해당 for문에서는 자동차의 주행거리 10당 별 하나를 출력한다. 
	}
	printf("\n");

}								
//2023-05-15
