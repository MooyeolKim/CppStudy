#include <stdio.h>

int main(void)
{
	double money=24;
	int year;

	for(year = 1627; year <= 2014; year++)
	{
		money *= 1.08;
	}

	printf("%d�� ����ư ���� ��ġ�� %.2f�޷� �Դϴ�.\n", year-1, money);

	return 0;
}