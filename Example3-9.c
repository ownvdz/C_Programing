#include<stdio.h>
int main(void) {

    float speed = 300000, range = 149600000;

    printf("빛의 속도는 %fkm/s\n", speed);
    printf("태양과 지구와의 거리 %fkm\n", range);
    printf("도달 시간은 %f초\n", range/speed);

    return 0;
}
//2023-04-27