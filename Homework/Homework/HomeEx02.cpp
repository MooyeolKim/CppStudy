#include <stdio.h>

int main(void)
{
	int i, num1, num2, sum = 0;

	printf("ù ��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &num1);

	printf("�� ��° ���� �Է��Ͻÿ� : ");
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
		
	printf("%d ~ %d ������ ���� : %d\n", num1, num2, sum);

	return 0;
}
