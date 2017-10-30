#include <stdio.h>
#include <string.h>
#include <time.h>
#define MAX_INPUT 20

int main(void)
{
	int noon;
	time_t now;
	struct tm *lt = NULL;
	char name[MAX_INPUT] = {0};
	char output[100] = {0};
	char *greeting[] = {"���� ��ħ�Դϴ�. ", "�ȳ��� �輼��. "};
	char *postfix[] = {"��", "��"};

	printf("�̸��� �Է��ϼ��� : ");
	fgets(name, MAX_INPUT-1, stdin);
	name[strlen(name)-1] = '\0';

	now = time(NULL);
	lt = localtime(&now);

	if(lt->tm_hour < 12)
		noon = 0;
	else
		noon = 1;

	strcpy(output, greeting[noon]);
	strcat(output, name);
	strcat(output, postfix[noon]);

	printf("%s\n", output);
	return 0;
}

