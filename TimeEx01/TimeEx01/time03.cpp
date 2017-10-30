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

	printf("2014�� ����� �����ű��� ������ %d�� ���ҽ��ϴ�.\n", (int)diff1/60/60/24);
	printf("2014�� ��õ �ƽþȰ��ӱ��� ������ %d�� ���ҽ��ϴ�.\n", (int)diff2/60/60/24);
	printf("2018�� ��â ����ø��ȱ��� ������ %d�� ���ҽ��ϴ�.\n", (int)diff3/60/60/24);
	return 0;
}