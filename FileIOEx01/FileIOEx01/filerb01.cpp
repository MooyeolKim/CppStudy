#include <stdio.h>

#define MAX_INPUT 128

int main(void)
{
	FILE *fp;
	char text[MAX_INPUT];
	int total;
	double average;

	if((fp = fopen("score.bin", "rb")) == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 0;
	}

	fread(text, 15, 1, fp);
	printf("%s", text);

	fread(text, 7, 1, fp);
	fread(&total, sizeof(int), 1, fp);
	printf("%s %d\n", text, total);

	fread(text, 7, 1, fp);
	fread(&average, sizeof(double), 1, fp);
	printf("%s %0.2f\n", text, average);

	fclose(fp);
	return 0;
}