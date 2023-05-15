#include<stdio.h>
#include<time.h>

int main(void) {
    time_t start, end;			//time_t는 unsigned long과 동일 
	start = time(NULL);			//시작점을 저장해둔다 
	printf("10초가 되면 아무 키나 누르세요\n");
	
	while(1) {
		if(getchar()) {			
			break;			//해당 while/if문은 문자를 입력했을 시에 이를 통과해 넘어가도록 한다 
		}
	}
	
	printf("종료되었습니다.\n");
	end = time(NULL);			//종료지점을 저장해둔다 
	printf("경과된 시간은 %ld 초입니다. \n", end - start);			//시작점에서 종료지점까지 걸린시간을 출력한다 
	
	return 0;
}						
//2023-05-15
