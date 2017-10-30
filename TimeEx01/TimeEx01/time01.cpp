//14.03.26
#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now = time(NULL);
	struct tm *lt = localtime(&now);

	printf("오늘은 %d년 %d월 %d일입니다.\n", lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday);
	printf("현재시각은 %d시 %d분 %d초입니다.\n", lt->tm_hour, lt->tm_min, lt->tm_sec);

	return 0;
}