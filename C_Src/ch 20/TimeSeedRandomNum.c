#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((int)time(NULL));    // 현재시간을 이용해서 씨드 설정
	for(i=0; i<5; i++)
		printf("정수 출력: %d \n", rand());
	return 0;
}
