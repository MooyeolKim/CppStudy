//14.03.24
#include <stdio.h>

int square(int num);

int main(void)
{
	int result, input;

	printf("제곱을 계산하고자 하는 값을 입력하세요 : ");
	scanf("%d", &input);

	result = square(input);
	//if(result < 0)
		//printf("입력 값이 처리할 수 있는 범위를 넘었습니다. \n");
	//else
		printf("%d의 제곱은 %d입니다.\n", input, result);
	return 0;
}

int square(int num)
{
	//if(num > 46340 || num < -46340)
	//	return -1;
	//else
	//	return num*num;
	int result = num*num;
	return result;
}
