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

	len = strlen(str);
	
	printf("�Է³��� : ");

	for(i=0 ; i<len ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for(i=0 ; i<len/2 ; i++)
	{
		if(str[i] != str[len-1-i])
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
		else if(i==len/2-1)
			printf("ȸ���Դϴ�.");
	}
	
	printf("\n");

	return 0;
}