#include <stdio.h>

#define MAX_INPUT 128

int main(void)
{
	FILE *fp;
	char text[MAX_INPUT];
	int total;
	double average;

	if((fp = fopen("score.txt", "rt")) == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 0;
	}

	fgets(text, MAX_INPUT, fp);
	printf("%s", text);

	fscanf(fp, "%s %d", text, &total);
	printf("%s %d\n", text, total);

	fscanf(fp, "%s %lf", text, &average);
	printf("%s %0.2f\n", text, average);

	fclose(fp);
	return 0;
}