//14.03.17
#include <stdio.h>
#define LESSON 3

int main(void)
{
	int students, sum=0, l, s;
	int score[][LESSON] = {
		{85, 90, 95},
		{70, 82, 60},
		{92, 88, 88},
		{94, 75, 79},
		{95, 98, 78},
		{82, 79, 88},
		{68, 80, 95},
		{78, 84, 92}
	};

	char *lesson[] = {"Korean", "English", "Math"};

	students = sizeof(score)/sizeof(score[0]);
	for(l=0 ; l<LESSON ; l++)
	{
		sum = 0;
		for(s=0 ; s<students ; s++)
		{
			sum += score[s][l];
		}
		printf("[%-7s] Total : %d, ", lesson[l], sum);
		printf("Average : %0.2f\n", (double)sum/students);
	}

	return 0;
}

