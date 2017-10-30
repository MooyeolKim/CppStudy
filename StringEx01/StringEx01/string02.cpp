#include <stdio.h>
#include <string.h>
#define MAX_INPUT 100

int main(void)
{
	char answer[MAX_INPUT] = {0};

	printf("컴퓨터를 영어로 뭐라고 합니까? ");
	fgets(answer, MAX_INPUT-1, stdin);
	answer[strlen(answer)-1] = '\0';

	if(strnicmp(answer, "Computer", 4) == 0)
		printf("정답입니다.\n");
	else
		printf("틀렸습니다. 정답은 Computer입니다.\n");

	return 0;
}