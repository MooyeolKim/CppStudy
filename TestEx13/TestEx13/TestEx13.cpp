#include <stdio.h>

int main(void)
{
	int age, money;

	printf("����� ���̴�? ");
	scanf("%d", &age);

	money = age * 365 * 3 * 3000;

	printf("����� ���� �䰪�� %d�� �Դϴ�\n", money);
	
	return 0;
}