#include <stdio.h>

int main(void)
{
	int n, i, j, cnt=0;

	printf("1 ~ n까지 소수 구하기\n");
	printf("n을 입력하시오 : ");
	scanf("%d", &n);

	printf("1 ~ %d까지 소수 : ", n);

	for(i=2; i<=n; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i == j)
			{
				cnt++;
				printf("%d ", i);
			}
			if(i%j == 0)
				break;

		}
	}

	printf("\n소수의 개수 : %d개\n", cnt);

	return 0;
}