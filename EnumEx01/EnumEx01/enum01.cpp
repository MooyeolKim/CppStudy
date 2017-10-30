//14.03.20
#include <stdio.h>

enum Season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
	enum Season s = (Season)3; //c++에선 캐스팅 해야 정수형으로 입력가능

	switch(s)
	{
	case SPRING:
		printf("봄\n");
		break;

	case SUMMER:
		printf("여름\n");
		break;
	case FALL:
		printf("가을\n");
		break;
	case WINTER:
		printf("겨울\n");
		break;
	}

	return 0;
}