#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_WORD 128

int main(void)
{
	int i, j, len, sum=0;
	char word[MAX_WORD];
	char *ptr = NULL;
	
	ptr = (char*)malloc(sizeof(char)*26);

	printf("***단어 점수 메기기***\n");
	printf("단어를 입력하시오. ");
	fgets(word, MAX_WORD-1, stdin);
	word[strlen(word)-1] = '\0';

	len = strlen(word)+1;

	for(i=0 ; i<26 ; i++)
	{
		ptr[i] = 'a'+i;
	}

	printf("%s의 점수는 ", word);

	for(i=0 ; i<len ; i++)
	{
		if(word[i] >= 65 && word[i] <= 90)
			word[i] += 'a'-'A';
		
		for(j=0 ; j<26 ; j++)
		{
			if(word[i] == ptr[j])
				sum += j+1;
		}
	}

	printf("%d점 입니다.\n", sum);

	free(ptr);
	return 0;
}