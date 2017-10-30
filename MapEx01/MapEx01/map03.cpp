#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	map<string, int> month_days_map;
	month_days_map["JAN"] = 31;
	month_days_map["FEB"] = 28;
	month_days_map["MAR"] = 31;
	month_days_map["APR"] = 30;
	month_days_map["MAY"] = 31;
	month_days_map["JUN"] = 30;
	month_days_map["JUL"] = 31;
	month_days_map["AUG"] = 31;
	month_days_map["SEP"] = 30;
	month_days_map["OCT"] = 31;
	month_days_map["NOV"] = 30;
	month_days_map["DEC"] = 31;

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