#include <stdio.h>
#define LESSONS 3

int main(void)
{
	int students;
	int sum=0;
	int l, s;
	int score[][LESSONS] = {
		{85, 90, 95},
		{70, 82, 60},
		{92, 88, 88},
		{94, 75, 79},
		{95, 68, 78},
		{82, 79, 88},
		{68, 80, 95},
		{78, 84, 92},
	};

	students = sizeof(score)/sizeof(score[0]);
	for(s=0; s<students; s++)
	{
		sum =0;
		for(l=0; l<LESSONS; l++)
		{
			sum += score[s][l];
		}

		printf("[%d] Total : %d, ", s, sum);
		printf("Average : %.2f\n", (double)sum/LESSONS);
	}

	return 0;
}