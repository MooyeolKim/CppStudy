#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("���ڸ� �Է��ϰ�, �������� 0�� �Է��ϼ���.\n");

	do
	{
		scanf("%d", &num);
		sum += num;
	}while(num != 0);

	printf("�հ�� %d�Դϴ�.\n", sum);
	return 0;
}