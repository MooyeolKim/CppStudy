//14.03.19
#include <stdio.h>
#include <string.h>

struct Students
{
	int num;
	char name[20];
	int kor;
	int eng;
	int mat;
	int sum;
	double avg;
};

int main(void)
{
	int i;
	Students st[5] = {
		{201401, "°­µ¿¼®", 90, 95, 93},
		{201402, "ÇÑÇØ¿ø", 96, 89, 92},
		{201403, "°­µ¿Èñ", 86, 90, 88},
		{201404, "¿À½ÂÈÆ", 93, 96, 95},
	};

	st[4] = st[3];
	st[4].num += 1;
	strcpy(st[4].name, "±è¸¶¸®"); 
	st[4].kor -= 5;
	st[4].mat -= 5;

	for(i=0 ; i<5 ; i++)
	{
		st[i].sum = st[i].kor + st[i].eng + st[i].mat;
		st[i].avg = (double)st[i].sum/3;
		printf("%d %s %d %d %d %d %.2f\n", st[i].num, st[i].name, st[i].kor, st[i].eng, st[i].mat, st[i].sum, st[i].avg);
	}

	return 0;
}