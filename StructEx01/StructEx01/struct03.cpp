#include <stdio.h>

struct Data
{
	char a;
	int b;
	float c;
};

int main(void)
{
	Data x = {'A', 10, 10.5};
	Data *ptr;

	ptr = &x;

	ptr->a = 'B';
	ptr->b = 11;
	ptr->c = 11.5;

	printf("%c %d %.1f\n", ptr->a, ptr->b, ptr->c);

	return 0;
}