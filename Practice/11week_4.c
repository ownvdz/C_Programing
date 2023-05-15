#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h> 

int main(void) {
    double height, distance, tree_height, degrees, radians;
	
	printf("나무와의 길이(단위는 미터): ");
	scanf("%lf", &distance);			//나무와의 길이를 입력받는다 
	
	printf("측정자의 키(단위는 미터): ");
	scanf("%lf", &height);				//측정자의 키를 입력받는다 
	
	printf("각도(단위는 도): ");
	scanf("%lf", &degrees);				//각도를 입력받는다 
	
	radians = degrees * (3.141592 / 180.0);			//tan에 사용하기 위해 각도를 다른 형식으로 변환 
	
	tree_height = tan(radians) * distance + height;			//나무의 높이 계산 
	printf("나무의 높이(단위는 미터): %lf \n", tree_height);
	
	return 0;
}						
//2023-05-15
