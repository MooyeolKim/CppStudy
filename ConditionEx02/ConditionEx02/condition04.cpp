#include <stdio.h>

int main(void)
{
	int month;

	do
	{
		printf("월 입력(1~12) : ");
		scanf("%d", &month);
		if(month < 1 || month > 12)
			printf("잘못 입력 하셨습니다.\n");

	}while(month < 1 || month > 12);

	printf("%d월의 일수는 ", month);

	switch(month)
	{
	case 2:
		printf("28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	default :
		printf("31");
		break;
	}
	
	printf("일 입니다.\n");

	return 0;
}