//14.03.18
#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int row, col;
	int r, c;
	int sum;
	int **data;

	printf("행과 열의 개수를 각각 입력하세요 : ");
	scanf("%d %d", &row, &col);

	data = (int **)malloc(sizeof(int*)*row);
	data[0] = (int *)malloc(sizeof(int)*row*col);

	for(r=1 ; r<row ; r++)
	{
		data[r] = data[r-1] + col;
	}

	for(r=0 ; r<row ; r++)
	{
		printf("%d번째 행의 원소 %d개를 입력하세요 : ", r+1, col);

		for(c=0 ; c<col ; c++)
		{
			scanf("%d", &data[r][c]);
		}
	}

	printf("\n");

	for(r=0 ; r<row ; r++)
	{
		sum = 0;
		for(c=0 ; c<col ; c++)
		{
			sum += data[r][c];
			printf("%d\t", data[r][c]);
		}
		printf("|  %d\n", sum);
	}

	for(c=0 ; c<col ; c++)
	{
		printf("--------");
	}

	printf("\n");

	for(c=0 ; c<col ; c++)
	{
		sum = 0;
		for(r=0 ; r<row ; r++)
		{
			sum += data[r][c];
		}
		printf("%d\t", sum);
	}

	printf("\n");

	free(data[0]);
	free(data);

	return 0;
}
