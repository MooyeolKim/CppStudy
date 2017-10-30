#include <stdio.h>
#define NUM 128

int main(void)
{
	int a[NUM], cnt=0, n;

	printf("정수 입력 : ");
	scanf("%d", &n);

	printf("10진수 : %d → 2진수 : ", n);
	
	while(n > 0)
	{
		a[cnt++] = n%2;
		n /= 2;
	}
	
	while(cnt > 0)
	{
		printf("%d", a[--cnt]);
	}

	printf("\n");
	return 0;
}
