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

	len = strlen(str);
	
	printf("입력내용 : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for(i=0 ; i<len/2 ; i++)
	{
		if(str[i] != str[len-1-i])
		{
			printf("회문이 아닙니다.");
			break;
		}
		else if(i==len/2-1)
			printf("회문입니다.");
	}
	
	printf("\n");

	return 0;
}