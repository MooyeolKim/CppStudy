#include <stdio.h>
#include <string.h>
#define NUM 128

int main(void)
{
	int i, len;
	char str[NUM] , tmp;

	printf("문자열 입력 : ");
	fgets(str, NUM-1, stdin);
	str[strlen(str)-1] = '\0';

	len = strlen(str); //null문자를 뺀 길이
	
	printf("%d",strlen(str)-1);

	/*
	for(i=0 ; i<len/2 ; i++)
	{
		if(str[i] != str[len-1-i])
		{
			printf("회문이 아닙니다.\n");
			return 0;
		}
	}

	printf("회문입니다.\n");*/
	return 0;
}