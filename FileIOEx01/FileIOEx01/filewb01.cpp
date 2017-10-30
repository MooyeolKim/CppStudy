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

	if((fp = fopen("score.bin", "wb")) == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 0;
	}

	fwrite("성적처리 결과\n", 15, 1, fp);
	fwrite("총점: ", 7, 1, fp);
	fwrite(&sum, sizeof(int), 1, fp);
	fwrite("평균: ", 7, 1, fp);
	fwrite(&average, sizeof(double), 1, fp);
	
	fclose(fp);
	return 0;
}