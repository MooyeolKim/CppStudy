#include <stdio.h>

int calculator(int a, int c);

int main(void)
{
	int charge = 13000;
	int amount;

	printf("�̹� �� ��ȭ �ð��� �� ������ �Է��ϼ���.\n");
	scanf("%d", &amount);

	charge = calculator(amount, charge);

	printf("��ȭ ����� %d�� �Դϴ�.\n", charge);
	return 0;
}

int calculator(int a, int c)
{
	if(a < 100)
	{
		c += a*50;
	}

	else if(a < 200)
	{
		c += 100*50;
		c += (a-100)*30;
	}

	else
	{
		c += 100*50;
		c += 100*30;
		c += (a-200)*20;
	}
	return c;
}