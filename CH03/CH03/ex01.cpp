#include <stdio.h>

int main(void)
{
	double money=24;
	int year;

	for(year = 1627; year <= 2014; year++)
	{
		money *= 1.08;
	}

	printf("%d년 맨하튼 섬의 가치는 %.2f달러 입니다.\n", year-1, money);

	return 0;
}