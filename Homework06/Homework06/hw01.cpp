#include <stdio.h>
#define NUM 10

int main(void)
{
	int a[NUM], i, max, min;

	printf("***최대값 & 최소값 찾기***\n");

	for(i=0 ; i<NUM ; i++)
	{
		printf("%d번 째 숫자 입력 : ", i+1);
		scanf("%d", &a[i]);
	}

	//최대값, 최소값 연산
	max = a[0];
	min = a[0];
	for(i=1 ; i<NUM ; i++)
	{
		if(max < a[i])
			max = a[i];
		
		if(min > a[i])
			min = a[i];
	}

	printf("\n최대값 : %d\n", max);
	printf("최소값 : %d\n", min);
	printf("차이값 : %d\n", max-min);

	return 0;
}		