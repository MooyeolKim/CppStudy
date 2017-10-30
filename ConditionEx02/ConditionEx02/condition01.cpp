#include <stdio.h>

int main(void)
{
	int charge = 13000;
	int amount;

	printf("이번 달 통화 시간을 분 단위로 입력하세요.");
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

	printf("통화요금은 %d원 입니다.\n", charge);
	return 0;
}
			