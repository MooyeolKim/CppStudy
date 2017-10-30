#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now;
	struct tm *lt;
	int weekday, i;
	int num_days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	now = time(NULL);
	lt = localtime(&now);

	lt->tm_mday = 1;
	mktime(lt);

	weekday = lt->tm_wday;

	printf("===================================================\n");
	printf("************************%d월************************\n", lt->tm_mon+1);
	printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\t\n");
	
	for(i=0 ; i<weekday ; i++)
		printf("\t");

	for(i=1 ; i<=num_days[lt->tm_mon] ; i++)
	{
		if(weekday > 6)
		{
			printf("\n");
			weekday = 0;
		}
		printf("%d\t", i);
		weekday++;
	}

	now = time(NULL);
	lt = localtime(&now);
	printf("\n\n%d년 %d월 %d일 %d시 %d분 %d초\n", lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
	printf("===================================================\n");
	return 0;
}