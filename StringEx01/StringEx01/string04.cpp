#include <stdio.h>
#include <string.h>
#define MAX_INPUT 256

int main(void)
{
	char input[MAX_INPUT] = {0};
	char *ptr = NULL;
	int count = 0;

	printf("���ڿ� �� ����ã��\n");
	printf("���ڿ��� �Է� : ");
	fgets(input, MAX_INPUT-1, stdin);
	input[strlen(input)-1] = '\0';
	printf("\n");
	ptr = input;
	
	while(1)
	{
		ptr = strpbrk(ptr, "aeiouAEIOU");
				
		if(ptr == NULL)
			break;
		
		printf("%d��° ���ڴ� %c�Դϴ�. \n", ptr-input+1, *ptr);
		count++;
		ptr++;
	}

	return 0;
}