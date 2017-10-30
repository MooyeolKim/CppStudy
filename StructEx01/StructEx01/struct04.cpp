#include <stdio.h>

struct Data
{
	char a;
	int b;
	float c;
};

int main(void)
{
	int i;
	Data x[5];
	Data *ptr = NULL;

	ptr = x;
	ptr->a = 'A';
	ptr->b = 10;
	ptr->c = 10.5;
	
	for(i=0 ; i<5 ; i++)
	{
		(ptr+i)->a = ptr->a + i;
		(ptr+i)->b = ptr->b + i;
		(ptr+i)->c = ptr->c + i;
		
		printf("%c %d %.1f\n", (ptr+i)->a, (ptr+i)->b, (ptr+i)->c);
	}

	return 0;
}