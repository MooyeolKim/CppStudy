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
	Students *ptr = NULL;
	ptr = st;
		
	*(ptr+4) = *(ptr+3);
	(ptr+4)->num += 1;
	strcpy((ptr+4)->name, "±è¸¶¸®");
	(ptr+4)->kor -= 5;
	(ptr+4)->mat -= 5;

	for(i=0 ; i<5 ; i++)
	{
		(ptr+i)->sum = (ptr+i)->kor + (ptr+i)->eng + (ptr+i)->mat;
		(ptr+i)->avg = (double)(ptr+i)->sum/3;
		printf("%d %s %d %d %d %d %.2f\n", (ptr+i)->num, (ptr+i)->name, (ptr+i)->kor, (ptr+i)->eng, (ptr+i)->mat, (ptr+i)->sum, (ptr+i)->avg);
	}

	return 0;
}