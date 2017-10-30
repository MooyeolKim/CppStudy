#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	map<string, int> month_days_map;
	pair<string, int> month_days[] = {
		make_pair("JAN", 31), make_pair("FEB", 28), make_pair("MAR", 31), make_pair("APR", 30),
		make_pair("MAY", 31), make_pair("JUN", 30), make_pair("JUL", 31), make_pair("AUG", 31),
		make_pair("SEP", 30), make_pair("OCT", 31), make_pair("NOV", 30), make_pair("DEC", 31)
	};

	for(int i=0 ; i<sizeof(month_days)/sizeof(pair<string, int>) ; i++)
	{
		month_days_map.insert(month_days[i]);
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