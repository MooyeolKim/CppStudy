#include <stdio.h>
#include <string.h>
#define MAX_INPUT 256

int main(void)
{
	char input[MAX_INPUT] = {0};
	char *ptr = NULL;
	int count = 0;

	printf("문자열 속 모음찾기\n");
	printf("문자열을 입력 : ");
	fgets(input, MAX_INPUT-1, stdin);
	input[strlen(input)-1] = '\0';
	printf("\n");
	ptr = input;
	
	while(1)
	{
		ptr = strpbrk(ptr, "aeiouAEIOU");
				
		if(ptr == NULL)
			break;
		
		printf("%d번째 글자는 %c입니다. \n", ptr-input+1, *ptr);
		count++;
		ptr++;
	}

	return 0;
}