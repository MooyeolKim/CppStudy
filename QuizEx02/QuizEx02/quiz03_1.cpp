#include <stdio.h>
#include <string.h>
#define NUM 128

int main(void)
{
	int i, len;
	char str[NUM] , tmp;

	printf("���ڿ� �Է� : ");
	fgets(str, NUM-1, stdin);
	str[strlen(str)-1] = '\0';

	len = strlen(str); //null���ڸ� �� ����
	
	printf("%d",strlen(str)-1);

	/*
	for(i=0 ; i<len/2 ; i++)
	{
		if(str[i] != str[len-1-i])
		{
			printf("ȸ���� �ƴմϴ�.\n");
			return 0;
		}
	}

	printf("ȸ���Դϴ�.\n");*/
	return 0;
}