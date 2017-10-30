#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("***좌상변이 직각인 삼각형 만들기***\n");
	printf("가로(세로) 입력 : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i+1; j++)
		{
			printf("* ");
		}
						
		printf("\n");
	}

	printf("면적은 %d\n", n*n/2);
	return 0;
}