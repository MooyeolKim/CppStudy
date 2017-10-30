#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	map<string, int> month_days_map;

	string month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i=0 ; i<sizeof(month)/sizeof(string) ; i++)
	{
		month_days_map.insert(make_pair(month[i], days[i]));
	}

	cout << "달 이름을 영어 대문자로 세자까지만 입력하세요 : ";
	string input;
	cin >> input;

	map<string, int>::iterator it = month_days_map.find(input);
	if(it == month_days_map.end())
	{
		cout << "그런 달은 없습니다." << endl;
	}
	else
	{
		cout << (*it).first << "는 " << (*it).second << "일 까지 있습니다." << endl;
	}

	return 0;
}