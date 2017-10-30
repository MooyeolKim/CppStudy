//14.03.25
#include <stdio.h>

int main(void)
{
	int students, s, sum=0;
	int score[] = {85, 90, 95, 70, 82, 60, 92, 88};
	double average;
	FILE *fp;

	students = sizeof(score)/sizeof(int);
	for(s=0 ; s<students ; s++)
	{
		sum += score[s];
	}
	average = (double)sum/students;

	if((fp = fopen("c:\\temp\\score.txt", "wt")) == NULL)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 0;
	}

	fputs("����ó�� ���\n", fp);
	fprintf(fp, "����: %d\n", sum);
	fprintf(fp, "���: %0.2f\n", average);

	fclose(fp);
	return 0;
}