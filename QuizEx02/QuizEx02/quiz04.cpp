#include <stdio.h>
#define NUM 128

int main(void)
{
	int a[NUM], i, cnt=0, n;

	printf("정수 입력 : ");
	scanf("%d", &n);

	printf("10진수 : %d → 2진수 : ", n);
	for(i=0 ; i<NUM ; i++)
	{
		a[i] = n%2;
		n /= 2;
		if(n == 0)
			break;
		cnt++;
	}
	
	for(i=cnt ; i>=0 ; i--)
	{
		printf("%d", a[i]);
	}

	printf("\n");
	return 0;
}
