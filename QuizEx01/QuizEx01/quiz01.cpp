//임시 변수 temporary사용하기(swapping)
#include <stdio.h>

int main(void)
{
	int i, n1, n2, tmp, sum = 0;

	printf("첫 번째 수를 입력하시오. ");
	scanf("%d", &n1);
	printf("두 번째 수를 입력하시오. ");
	scanf("%d", &n2);

	if(n1 > n2)
	{
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}

	for(i = n1; i <= n2; i++)
	{
		sum+=i;
		if(i < n2)
		{
			printf("%d + ", i);
		}
		else if(i == n2)
		{
			printf("%d = %d\n", n2, sum);
		}
	}
	
	printf("%d ~ %d까지의 합 : %d\n", n1, n2, sum);

	return 0;
}
