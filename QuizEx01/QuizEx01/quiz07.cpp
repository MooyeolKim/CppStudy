#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("***좌하변이 직각인 삼각형 만들기***\n");
	printf("가로(세로) 입력 : ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("* ");
		}
						
		printf("\n");
	}

	printf("면적은 %d", n*n/2);
	return 0;
}