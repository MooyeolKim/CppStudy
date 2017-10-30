#include <stdio.h>

int main(void)
{
	int i, j, row, col;

	printf("****평행사변형 만들기****\n");
	printf("행을 입력하시오 : ");
	scanf("%d", &row);
	printf("열을 입력하시오 : ");
	scanf("%d", &col);

	printf("\n");
	i=0;
	do
	{
		j=0;
		do
		{
			printf(" ");
			j++;
		}while(j<row-i);

		j = 0;
		do
		{
			printf("* ");
			j++;
		}while(j<col);
		i++;
		printf("\n");
	}while(i<row);
	
	printf("\n면적 : %d\n", col*row);
	return 0;
}
