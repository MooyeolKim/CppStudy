#include <stdio.h>
#include <string.h>
#define MAX_INPUT 100

int main(void)
{
	char answer[MAX_INPUT] = {0};

	printf("��ǻ�͸� ����� ����� �մϱ�? ");
	fgets(answer, MAX_INPUT-1, stdin);
	answer[strlen(answer)-1] = '\0';

	if(strnicmp(answer, "Computer", 4) == 0)
		printf("�����Դϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�. ������ Computer�Դϴ�.\n");

	return 0;
}