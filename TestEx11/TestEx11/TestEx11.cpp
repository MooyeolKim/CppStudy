#include <stdio.h>

int main(void)
{
	int height;
	
	printf("Ű�� �Է��Ͻÿ� :");
	scanf("%d", &height);

	printf("Ű�� %dm %dcm �Դϴ�\n", height/100, height%100);

	return 0;
}