#include <stdio.h>
#define NUM 128

int main(void)
{
	int a[NUM], i, n, tmp, mul=1;

	printf("***n! 구하기***\n");

	printf("n을 입력 : ");
	scanf("%d", &n);

	tmp = n;
	for(i=0 ; i<n ; i++)
	{
		a[i] = tmp--;
		mul *= a[i];
	}

	printf("%d! = ", n);
	for(i=0 ; i<n ; i++)
	{
		printf("%d", a[i]);
		if(i != n-1)
			printf(" * ");
	}
	printf(" = %d\n", mul);

	printf("%d! = ", n);
	for(i=n-1 ; i>=0 ; i--)
	{
		printf("%d", a[i]);
		if(i != 0)
			printf(" * ");
	}
	printf(" = %d\n", mul);

	return 0;
}
			