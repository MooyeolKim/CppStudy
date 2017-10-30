#include <stdio.h>

int Count(void);

int main(void)
{
	int i, count;
	for(i=0 ; i<5 ; i++)
	{
		count = Count();
		printf("Count 함수가 %d번 호출 되었습니다.\n", count);
	}
	return 0;
}

int Count(void)
{
	//static int count = 0;
	int count = 0;
	count ++;
	return count;
}