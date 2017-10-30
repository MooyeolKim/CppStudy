#include <stdio.h>

int main(void)
{
	int i;
	char *str1 = "abcde";
	char str2[6];
		
	for(i=0 ; i<5 ; i++)
	{
		//str2[i] = *(str1+4-i);
		str2[i] = str1[4-i];
	}
	str2[5] = '\0';

	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
}
 
	
	