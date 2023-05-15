#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int coin_toss(void);

int main(void) {
    int toss;			//동전을 던진 횟수를 의미하는 변수 
    int heads = 0;			//동전을 던졌을 때 앞면이 나온 횟수를 의미하는 변수 
    int tails = 0;			//동전을 던졌을 때 뒷면이 나온 횟수를 의미하는 변수 
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++) {	//	해당 for문은 동전을 100회 던져서 
        if(coin_toss() == 1) {				//	앞면과 뒷면이 각각 몇회씩 나왔는지 
            heads++;						//	기록하는 역할을 한다. 
        } else {							//	이 때, coin_toss 함수의 리턴값이 
            tails++;						//	1이면 앞면, 0이면 뒷면으로 생각한다. 
        }
    }

    printf("동전의 앞면: %d \n", heads);			//앞면이 나온 횟수 출력 
    printf("동전의 뒷면: %d \n", tails);			//뒷면이 나온 횟수 출력 
    return 0;
}

int coin_toss(void) {

    int head=rand()%2;			//	해당 함수는 무작위로 출력되는 홀수와 짝수를 
    return head;				//	2로 나누어 홀수면 1으로, 짝수면 0으로 리턴값을 준다 
}								
//2023-05-15
