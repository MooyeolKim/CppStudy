#include <stdio.h>

int main(void)
{
	int charge = 13000;
	int amount;

	printf("�̹� �� ��ȭ �ð��� �� ������ �Է��ϼ���.");
	scanf("%d", &amount);

	if(amount < 100)
		charge += amount*50;

	else if(amount < 200)
	{
		charge += 100*50;
		charge += (amount-100)*30;
	}
	else
	{
		charge += 100*50;
		charge += 100*30;
		charge += (amount-200)*20;
	}

	printf("��ȭ����� %d�� �Դϴ�.\n", charge);
	return 0;
}
			