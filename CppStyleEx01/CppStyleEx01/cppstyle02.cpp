//14.03.28
#include <iostream>
using namespace std;

int main(void)
{
	char name[20];
	char signer[30];

	cout << "당신의 이름은?";
	cin >> name;

	cout << "좋아하는 가수는?";
	cin >> signer;

	cout << "내 이름은 " << name << "입니다." << endl;
	cout << "내가 좋아하는 가수는 " << signer << "입니다." << endl;

	return 0;
}