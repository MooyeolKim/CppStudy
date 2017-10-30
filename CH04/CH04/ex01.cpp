//14.03.17
#include <stdio.h>
#include <string.h>

#define MAX_LEN 256

int main(void)
{
	int sum=0;
	char word[MAX_LEN];
	char *ptr = NULL;

	printf("***단어 점수 메기기***\n");
	printf("단어 입력 : ");
	fgets(word, MAX_LEN-1, stdin);
	word[strlen(word)-1] = '\0';

	ptr = word;

	while(*ptr)
	{
		if(*ptr >= 'A' && *ptr <= 'Z')
			sum += *ptr -'A'+1;
		else if(*ptr >= 'a' && *ptr <= 'z')
			sum += *ptr -'a'+1;
		
		ptr++;
	}

	printf("%s의 점수는 %d점 입니다.\n", word, sum);
	return 0;
}