//14.03.17
#include <stdio.h>
#include <string.h>

#define MAX_LEN 256

int main(void)
{
	int sum=0;
	char word[MAX_LEN];
	char *ptr = NULL;

	printf("***�ܾ� ���� �ޱ��***\n");
	printf("�ܾ� �Է� : ");
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

	printf("%s�� ������ %d�� �Դϴ�.\n", word, sum);
	return 0;
}