#include <stdio.h>
#include <math.h>

int main(void)
{
	int students, s, sum = 0;
	int score[] = {85, 90, 95, 70, 82, 60, 92, 88};
	double average, stdev, variance = 0;

	students = sizeof(score)/sizeof(int);
	for(s=0 ; s<students ; s++)
	{
		sum += score[s];
	}
	average = (double)sum/students;

	for(s=0 ; s<students ; s++)
	{
		variance += (score[s]-average)*(score[s]-average);
	}
	variance /= students;
	stdev = sqrt(variance);

	printf("���� : %d\n", sum);
	printf("��� : %0.2f\n", average);
	printf("�л� : %0.2f\n", variance);
	printf("ǥ������ : %0.2f\n", stdev);

	return 0;
}