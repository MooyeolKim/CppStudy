#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_FILENAME 256
#define BUFFER_SIZE 102400

int main(void)
{
	char srcfile[MAX_FILENAME];
	char dstfile[MAX_FILENAME];
	FILE *fpsrc=NULL;
	FILE *fpdst=NULL;
	char *buffer=NULL;
	int read;

	printf("원본 파일명을 입력하세요 : ");
	fgets(srcfile, MAX_FILENAME, stdin);
	srcfile[strlen(srcfile)-1] = '\0';

	fpsrc = fopen(srcfile, "rb");
	if(!fpsrc)
	{
		printf("원본 파일을 열지 못했습니다.\n");
		return 1;
	}

	printf("복사될 파일명을 입력하세요 : ");
	fgets(dstfile, MAX_FILENAME, stdin);
	dstfile[strlen(dstfile)-1] = '\0';

	fpdst = fopen(dstfile, "wb");
	if(!fpdst)
	{
		printf("복사될 파일을 열지 못했습니다.\n");
		return 1;
	}

	buffer = (char *)malloc(BUFFER_SIZE);

	do
	{
		read = fread(buffer, 1, BUFFER_SIZE, fpsrc);
		fwrite(buffer, 1, read, fpdst);
	}while(read == BUFFER_SIZE);

	printf("%s가 %s에 복사되었습니다.\n", srcfile, dstfile);

	fclose(fpsrc);
	fclose(fpdst);
	free(buffer);
	return 0;
}

