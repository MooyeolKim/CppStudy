#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("*****정사각형 만들기*****\n");
	printf("한변의 길이 : ");
	scanf("%d", &n);

	i = 1;
	while(i<=n)
	{
		j = 1;
		while(j<=n)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}