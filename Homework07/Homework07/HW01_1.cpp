#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
	int i, len, n=100, sum=0;
	char *word=NULL;
		
	printf("***�ܾ� ���� �ޱ��***\n");
	printf("�ܾ �Է��Ͻÿ�. ");
	fgets(word, n-1, stdin);
	word[strlen(word)-1] = '\0';

	len = strlen(word);
	n = len;
		
	word = (char*)malloc(sizeof(char)*n);

	for(i=0 ; i<len ; i++)
	{
		if(word[i] >= 'A' && word[i] <= 'Z')
			sum += word[i]-'A'+1;

		else if(word[i] >= 'a' && word[i] <= 'z')
			sum += word[i]-'a'+1;
	}
	
	printf("%s�� ������ %d�� �Դϴ�.\n", word, sum);

	free(word);
	return 0;
}