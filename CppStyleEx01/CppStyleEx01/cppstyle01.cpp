//14.03.27
#include <iostream>
//using namespace std;

int main(void)
{
	int num1;
	
	std::cout << "첫번째 정수 입력 : ";
	std::cin >> num1;

	int num2;
	std::cout << "두번째 정수 입력 : ";
	std::cin >> num2;

	int result = num1 + num2;
	std::cout << "합계 : " << result << std::endl;

	return 0;
}