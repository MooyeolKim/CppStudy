#include <stdio.h>

int main(void)
{
	int i, j, row, col;

	printf("****���簢�� �����****\n");
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &row);
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &col);

	printf("\n");
	i=0;
	do
	{
		j=0;
		do
		{
			printf("* ");
			j++;
		}while(j<col);
		i++;
		printf("\n");
	}while(i<row);
	
	printf("\n���� : %d\n", col*row);
	return 0;
}
