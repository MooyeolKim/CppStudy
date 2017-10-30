#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("숫자를 입력하고, 끝내려면 0을 입력하세요.\n");

	do
	{
		scanf("%d", &num);
		sum += num;
	}while(num != 0);

	printf("합계는 %d입니다.\n", sum);
	return 0;
}