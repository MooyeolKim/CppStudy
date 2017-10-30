#include <stdio.h>
#include <string.h>
#define MAX_INPUT 256

int main(void)
{
	char input[MAX_INPUT] = {0};
	char *ptr = NULL;
	char *space = NULL;
	int acnt,scnt = 0;

	printf("문자열 속 a찾기\n");
	printf("문자열을 입력 : ");
	fgets(input, MAX_INPUT-1, stdin);
	input[strlen(input)-1] = '\0';
	printf("\n");
	ptr = input;
	space = input;
	
	while(1)
	{
		space = strchr(space, ' ');
		
		if(space == NULL)
			break;
		
		scnt++;
		space++;
	}
	

	while(1)
	{
		ptr = strchr(ptr, 'a');
			
		if(ptr == NULL)
			break;
		
		printf("%d번째 글자는 a입니다. \n", ptr-input+1-);
		acnt++;
		
		ptr++;
	}

	printf("a가 총 %d번 나왔습니다.\n", acnt);
	return 0;
}