#include <stdio.h>

int main(void)
{
	int height;
	
	printf("키를 입력하시오 :");
	scanf("%d", &height);

	printf("키는 %dm %dcm 입니다\n", height/100, height%100);

	return 0;
}