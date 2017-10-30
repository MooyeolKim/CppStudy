#include <stdio.h>

int main(void)
{
	int num = 1, sum =0;

	while(sum + num <100)
	{
		sum += num;
		printf("Sum of 1 ~ %-2d is %d \n", num, sum);
		num++;
	}

	return 0;
}
			