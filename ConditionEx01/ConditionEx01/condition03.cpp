#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	for(num=1; num<=100; num++)
	{
		if(num%2 == 0)
		{
			printf("%d\t", num);
			sum += num;
		}
	}

	printf("짝수의 합계는 %d입니다.\n", sum);
	
	return 0;
}


		