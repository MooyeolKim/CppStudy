#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i, j, row, col, sum;
	int **data = NULL;
	
	printf("행과 열의 개수를 각각 입력하세요 : ");
	scanf("%d %d", &row, &col);
	
	data = (int **)malloc(sizeof(int *)*row);
	data[0] = (int *)malloc(sizeof(int)*col*row);

	for(i=1 ; i<row ; i++)
	{
		data[i] = data[i-1] + col;
	}
		 
	for(i=0 ; i<row ; i++)
	{
		printf("%d번째 행의 원소 %d개를 입력하세요 : ", i+1, col);
		
		for(j=0 ; j<col ; j++)
		{
			scanf("%d", &data[i][j]);
		}
	}
	printf("\n");

	for(i=0 ; i<row ; i++)
	{
		sum=0;
		for(j=0 ; j<col ; j++)
		{
			sum += data[i][j];
			printf("%d\t", data[i][j]);
		}
		printf("| %d\n", sum);
	}

	for(j=0 ; j<col ; j++)
	{
		printf("--------");
	}

	printf("\n");

	for(j=0 ; j<col ; j++)
	{
		sum=0;
		for(i=0 ; i<row ; i++)
		{
			sum += data[i][j];
			
		}
		printf("%d\t", sum);
	}

	printf("\n");

	printf("%d\t%d\n", data[0][7], data[0][8]);
	printf("%d\t%d\n", data[1][0], data[1][1]);

	free(data[0]);
	printf("%d\t%d\n", data[0][7], data[0][8]);
	printf("%d\t%d\n", data[1][0], data[1][1]);
	free(data);
	
	return 0;
}

