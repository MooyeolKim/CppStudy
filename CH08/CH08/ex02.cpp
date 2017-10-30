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

	printf("���� ���ϸ��� �Է��ϼ��� : ");
	fgets(srcfile, MAX_FILENAME, stdin);
	srcfile[strlen(srcfile)-1] = '\0';

	fpsrc = fopen(srcfile, "rb");
	if(!fpsrc)
	{
		printf("���� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	printf("����� ���ϸ��� �Է��ϼ��� : ");
	fgets(dstfile, MAX_FILENAME, stdin);
	dstfile[strlen(dstfile)-1] = '\0';

	fpdst = fopen(dstfile, "wb");
	if(!fpdst)
	{
		printf("����� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	buffer = (char *)malloc(BUFFER_SIZE);

	do
	{
		read = fread(buffer, 1, BUFFER_SIZE, fpsrc);
		fwrite(buffer, 1, read, fpdst);
	}while(read == BUFFER_SIZE);

	printf("%s�� %s�� ����Ǿ����ϴ�.\n", srcfile, dstfile);

	fclose(fpsrc);
	fclose(fpdst);
	free(buffer);
	return 0;
}

