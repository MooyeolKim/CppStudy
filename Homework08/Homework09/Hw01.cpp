#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i, j, row, col;
	int **data;
	
	printf("행과 열의 개수를 각각 입력하세요 : ");
	scanf("%d %d", &row, &col);
	row++, col++;

	data = (int **)malloc(sizeof(int *)*row);
	
	for(i=0 ; i<row ; i++)
	{
		data[i] = (int *)malloc(sizeof(int)*col);
	}

	 
	for(i=0 ; i<row-1 ; i++)
	{
		data[i][col-1] = 0;
		printf("%d번째 행의 원소 %d개를 입력하세요 : ", i+1, col-1);
		for(j=0 ; j<col-1 ; j++)
		{
			scanf("%d", &data[i][j]);
			data[i][col-1] += data[i][j];
		}
	}

	for(j=0 ; j<col-1 ; j++)
	{
		data[row-1][j] = 0;
		for(i=0 ; i<row-1 ; i++)
		{
			data[row-1][j] += data[i][j];
		}
	}

	for(i=0 ; i<row-1 ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			if(j==col-1)
				printf("| %-5d", data[i][j]);
			else
				printf("%-5d", data[i][j]);
		}
		printf("\n");
	}

	for(j=0 ; j<(col-1) ; j++)
	{
		printf("-----");
	}

	printf("\n");

	for(j=0 ; j<(col-1) ; j++)
	{
		printf("%-5d", data[row-1][j]);
	}

	for(i=0 ; i<row ; i++)
	{
		free(data[0]);
	}

	free(data);
	
	return 0;
}

