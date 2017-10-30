#include <stdio.h>
#define SPT 3

int main(void)
{
	int a[5][5], i, j, sum=0;
	
	printf("***성적입력기***\n");
	//입력부
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j==0)
				printf("학생%d의 국어", i+1); 
			else if(j==1)
				printf("학생%d의 영어", i+1); 
			else
				printf("학생%d의 수학", i+1); 
			printf("성적을 입력하시오. ");
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}

	//합계부, 석차초기화
	for(i=0; i<5; i++)
	{
		a[i][SPT] = 0;
		a[i][4] = 1;
		for(j=0; j<3; j++)
		{
			a[i][SPT] += a[i][j];
		}
	}

	//석차 산출
	for(i=0; i<5; i++)
	{
		
		for(j=i+1; j<5; j++)
		{		
			if(a[i][SPT] < a[j][SPT])
			{
				a[i][4] += 1;
			}
			else if(a[i][SPT] == a[j][SPT])
				continue;
			else
			{
				a[j][4] += 1;
			}
		}	
	}

	//출력부
	printf("\n\t국어\t영어\t수학\t합계\t석차\n");
	
	for(i=0; i<5; i++)
	{
		printf("학생%3d\t", i+1);
		for(j=0; j<5; j++)
		{
			printf("%4d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	
