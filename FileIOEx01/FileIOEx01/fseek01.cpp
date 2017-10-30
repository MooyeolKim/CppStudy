#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int cur, location, i;

	if((fp=fopen("data.bin", "wb"))==NULL)
	{
		printf("파일을 열 수 없습니다. \n");
		exit(1);
	}

	fwrite(array, sizeof(array), 1, fp);

	fp = freopen("data.bin", "rb", fp);

	printf("- 순차 접근 -\n");
	for(i=0 ; i<10 ; i++)
	{
		fread(&cur, sizeof(int), 1, fp);
		printf("%d ", cur);
	}

	printf("\n\n- 임의 접근 -\n");

	fseek(fp, 0, SEEK_SET);
	location = ftell(fp);
	printf("위치 : %d \n", location);

	fread(&cur, sizeof(int), 1, fp);
	printf("현재 값 : %d \n", cur);
	printf("--------------------------\n");
	
	fseek(fp, 0, SEEK_END);
	location = ftell(fp);
	printf("위치 : %d \n", location);

	fseek(fp, -4, SEEK_END);
	location = ftell(fp);
	printf("위치 : %d \n", location);

	fread(&cur, sizeof(int), 1, fp);
	printf("현재 값 : %d \n", cur);
	printf("--------------------------\n");

	fseek(fp, sizeof(int)*4, SEEK_SET);
	location = ftell(fp);
	printf("위치 : %d \n", location);

	fread(&cur, sizeof(int), 1, fp);
	printf("현재 값 : %d \n", cur);
	printf("--------------------------\n");

	fseek(fp, sizeof(int)*2, SEEK_SET);
	location = ftell(fp);
	printf("위치 : %d \n", location);

	fread(&cur, sizeof(int), 1, fp);
	printf("현재 값 : %d \n", cur);
	printf("--------------------------\n");

	fclose(fp);

	return 0;
}