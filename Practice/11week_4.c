#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h> 

int main(void) {
    double height, distance, tree_height, degrees, radians;
	
	printf("�������� ����(������ ����): ");
	scanf("%lf", &distance);			//�������� ���̸� �Է¹޴´� 
	
	printf("�������� Ű(������ ����): ");
	scanf("%lf", &height);				//�������� Ű�� �Է¹޴´� 
	
	printf("����(������ ��): ");
	scanf("%lf", &degrees);				//������ �Է¹޴´� 
	
	radians = degrees * (3.141592 / 180.0);			//tan�� ����ϱ� ���� ������ �ٸ� �������� ��ȯ 
	
	tree_height = tan(radians) * distance + height;			//������ ���� ��� 
	printf("������ ����(������ ����): %lf \n", tree_height);
	
	return 0;
}						
//2023-05-15
