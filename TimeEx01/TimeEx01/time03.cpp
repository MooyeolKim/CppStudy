#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now = time(NULL);
	time_t worldcup, asian, olympic;
	struct tm worldcupDay = {0, 0, 0, 13, 5, 114, 0, 0, 0};
	struct tm asianDay = {0, 0, 0, 19, 8, 114, 0, 0, 0};
	struct tm olympicDay = {0, 0, 0, 9, 1, 118, 0, 0, 0};
	double diff1, diff2, diff3;

	worldcup =mktime(&worldcupDay);
	diff1 = difftime(worldcup, now);
	asian =mktime(&asianDay);
	diff2 = difftime(asian, now);
	olympic =mktime(&olympicDay);
	diff3 = difftime(olympic, now);

	printf("2014년 브라질 월드컵까지 앞으로 %d일 남았습니다.\n", (int)diff1/60/60/24);
	printf("2014년 인천 아시안게임까지 앞으로 %d일 남았습니다.\n", (int)diff2/60/60/24);
	printf("2018년 평창 동계올림픽까지 앞으로 %d일 남았습니다.\n", (int)diff3/60/60/24);
	return 0;
}