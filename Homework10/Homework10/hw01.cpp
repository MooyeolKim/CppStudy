#include <stdio.h>

int calculator(int a, int c);

int main(void)
{
	int charge = 13000;
	int amount;

	printf("이번 달 통화 시간을 분 단위로 입력하세요.\n");
	scanf("%d", &amount);

	charge = calculator(amount, charge);

	printf("통화 요금은 %d원 입니다.\n", charge);
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