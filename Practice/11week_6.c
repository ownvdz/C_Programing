#include<stdio.h>
#include<math.h>

int menu(void);
void factorial();
void sine();
void logBase10();

int main(void) {
	
	while (1) {
		
		switch (menu()) {
			case 1:
				factorial();			//1�� �Է��ϸ� �Լ� factorial ���� 
				break;

			case 2:
				sine();					//2�� �Է��ϸ� �Լ� sine ���� 
				break;

			case 3:
				logBase10();			//3�� �Է��ϸ� �Լ� logBase10 ���� 
				break;
		
			case 7:
				printf("�����մϴ�.\n");		//7�� �Է��ϸ� ���� 
				return 0;

			default:
				printf("�߸��� �����Դϴ�.\n");		//1~7�� �Է����� ������ ���� 
				break;
		}	
	}
	
	return 0;
}

int menu(void) {			//�޴� ȭ�� ��� 
	int n;
	printf("1.���丮��\n");
	printf("2.����\n");
	printf("3.�α�(base 10)\n");
	printf("4.������\n");
	printf("5.����(nPr)\n");
	printf("6.����(nCr)\n");
	printf("7.����\n");
	printf("�������ּ���: ");
	scanf("%d", &n);
	
	return n;
}

void factorial() {			// �ش� �Լ��� ������ �Է¹����� �� ������ ���丮���� ����ϴ� �Լ��̴� 
	long long n, result=1,i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lld", &n);
	
	for (i = 1; i <= n; i++) {
		result = result * i;
	}
	
	printf("��� = %lld\n\n", result);
}

void sine() {				// �ش� �Լ��� ���� n�� �Է¹����� sin(n)�� ����ϴ� �Լ��̴� 
	double a, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("��� = %lf\n\n", result);
}

void logBase10() {			// �ش� �Լ��� ���� n�� �Է¹����� log(n)�� ����ϴ� �Լ��̴�
	double a, result;
	printf("�Ǽ����� �Է��Ͻÿ�: ");
	scanf("%lf", &a);

	if (a <= 0.0) {
		printf("����\n");	// 0 ������ ���� �Է¹����� ������ ���
	} else {
		result = log10(a);
		printf("��� = %lf\n\n", result);
	} 
}
