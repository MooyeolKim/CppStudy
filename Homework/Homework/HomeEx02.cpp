#include <stdio.h>

int main(void)
{
	int i, num1, num2, sum = 0;

	printf("첫 번째 수를 입력하시오 : ");
	scanf("%d", &num1);

	printf("두 번째 수를 입력하시오 : ");
	scanf("%d", &num2);
		
	for(i = num1; i <= num2; i++)
	{
		sum += i;
		printf("%d", i);
		if(i < num2) //(i != n2)
		{
			printf("+");
		}
		else if(i = num2)
		{
			printf(" = %d\n", sum);
		}
	}
		
	printf("%d ~ %d 까지의 합은 : %d\n", num1, num2, sum);

	return 0;
}
