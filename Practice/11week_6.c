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
				factorial();			//1을 입력하면 함수 factorial 실행 
				break;

			case 2:
				sine();					//2를 입력하면 함수 sine 실행 
				break;

			case 3:
				logBase10();			//3을 입력하면 함수 logBase10 실행 
				break;
		
			case 7:
				printf("종료합니다.\n");		//7을 입력하면 종료 
				return 0;

			default:
				printf("잘못된 선택입니다.\n");		//1~7을 입력하지 않으면 종료 
				break;
		}	
	}
	
	return 0;
}

int menu(void) {			//메뉴 화면 출력 
	int n;
	printf("1.팩토리얼\n");
	printf("2.싸인\n");
	printf("3.로그(base 10)\n");
	printf("4.제곱근\n");
	printf("5.순열(nPr)\n");
	printf("6.조합(nCr)\n");
	printf("7.종료\n");
	printf("선택해주세요: ");
	scanf("%d", &n);
	
	return n;
}

void factorial() {			// 해당 함수는 정수를 입력받으면 그 정수의 팩토리얼을 출력하는 함수이다 
	long long n, result=1,i;
	printf("정수를 입력하시오: ");
	scanf("%lld", &n);
	
	for (i = 1; i <= n; i++) {
		result = result * i;
	}
	
	printf("결과 = %lld\n\n", result);
}

void sine() {				// 해당 함수는 정수 n을 입력받으면 sin(n)을 출력하는 함수이다 
	double a, result;
	printf("각도를 입력하시오: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("결과 = %lf\n\n", result);
}

void logBase10() {			// 해당 함수는 정수 n을 입력받으면 log(n)을 출력하는 함수이다
	double a, result;
	printf("실수값을 입력하시오: ");
	scanf("%lf", &a);

	if (a <= 0.0) {
		printf("오류\n");	// 0 이하의 값을 입력받으면 오류를 출력
	} else {
		result = log10(a);
		printf("결과 = %lf\n\n", result);
	} 
}
//2023-05-15
