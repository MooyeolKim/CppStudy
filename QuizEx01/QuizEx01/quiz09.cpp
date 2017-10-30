#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("***우상변이 직각인 삼각형***\n");
	printf("가로(세로) 길이 : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("  ");
		}

		for(j=i; j<=n; j++)
		{
			printf("* ");
		}

		printf("\n");
	}

	return 0;
}
