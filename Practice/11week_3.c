#include<stdio.h>
#include<time.h>

int main(void) {
    time_t start, end;			//time_t�� unsigned long�� ���� 
	start = time(NULL);			//�������� �����صд� 
	printf("10�ʰ� �Ǹ� �ƹ� Ű�� ��������\n");
	
	while(1) {
		if(getchar()) {			
			break;			//�ش� while/if���� ���ڸ� �Է����� �ÿ� �̸� ����� �Ѿ���� �Ѵ� 
		}
	}
	
	printf("����Ǿ����ϴ�.\n");
	end = time(NULL);			//���������� �����صд� 
	printf("����� �ð��� %ld ���Դϴ�. \n", end - start);			//���������� ������������ �ɸ��ð��� ����Ѵ� 
	
	return 0;
}						
//2023-05-15
