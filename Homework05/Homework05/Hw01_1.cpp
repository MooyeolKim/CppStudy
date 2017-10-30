#include <stdio.h>

int main(void)
{
	int a[5][5], i, j, sum, rank;
	
	printf("***성적입력기***\n");
	//입력부
	for(i=0; i<5; i++)
	{
		sum = 0;
		printf("학생%d : ", i+1); 
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		a[i][3] = sum;
		printf("\n");
	}

	//석차 산출
	for(i=0; i<5; i++)
	{
		rank = 1;
		for(j=0; j<5; j++)
		{		
			if(a[i][3] < a[j][3]) //선택정렬의 원리 응용
				rank++;
		}
		a[i][4] = rank;
	}

	//출력부
	printf("\n\t국어\t영어\t수학\t합계\t석차\n");
	
	for(i=0; i<5; i++)
	{
		printf("학생%-3d\t", i+1);
		for(j=0; j<5; j++)
		{
			printf("%4d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	
