#include <stdio.h>

int main(void)
{
	int age, money;

	printf("당신의 나이는? ");
	scanf("%d", &age);

	money = age * 365 * 3 * 3000;

	printf("당신의 누적 밥값은 %d원 입니다\n", money);
	
	return 0;
}