#include <stdio.h>
#include <string.h>

#define MAX_WORD 128

int main(void)
{
	int i, len, sum=0;
	char word[MAX_WORD];
	
	printf("***�ܾ� ���� �ޱ��***\n");
	printf("�ܾ �Է��Ͻÿ�. ");
	fgets(word, MAX_WORD-1, stdin);
	word[strlen(word)-1] = '\0';

	len = strlen(word);

	i=0;
	while(i<len)	
	{
		if(word[i] >= 'A' && word[i] <= 'Z')
			sum += word[i] -'A'+1;
		else if(word[i] >= 'a' && word[i] <= 'z')
			sum += word[i] -'a'+1;
		i++;
	}

	printf("%s�� ������ %d�� �Դϴ�.\n", word, sum);
	return 0;
}

