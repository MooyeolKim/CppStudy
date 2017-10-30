#include <stdio.h>

int Divide(int dividend, int divider, int *result);

int main(void)
{
	int a, b, result;
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	if(Divide(a, b, &result))
	{
		printf("%d 나누기 %d는 %d 입니다. \n", a, b, result);
	}
	else
		printf("나누기를 할 수 없습니다.\n");

	return 0;
}

int Divide(int dividend, int divider, int *result)
{
	if(divider==0)
		return 0;

	*result = dividend/divider;
	return 1;
}