#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef multimap<int, string>::iterator year_movie_it;

int main(void)
{
	multimap<int, string> year_movie_map;
	pair<int, string> year_movie[] = {
		make_pair(1998, "Ÿ��Ÿ��"),
		make_pair(2008, "������ �и���׾�"),
		make_pair(1997, "�λ��� �Ƹ��ٿ�"),
		make_pair(2003, "�õ庸��"),
		make_pair(1994, "���̿�ŷ"),
		make_pair(1999, "��Ʈ����"),
		make_pair(1994, "������Ʈ����")
	};
		
	for(int i=0 ; i<sizeof(year_movie)/sizeof(pair<int, string>) ; i++)
	{
		year_movie_map.insert(year_movie[i]);
	}

	cout << "������ �Է��ϼ��� : ";
	int input;
	cin >> input;

	pair<year_movie_it, year_movie_it> result = year_movie_map.equal_range(input);
	if(result.first == result.second)
	{
		cout << "�� �ؿ� ���� ��ȭ�� �����ϴ�." << endl;
	}
	else
	{
		for(year_movie_it it=result.first ; it!=result.second ; it++)
		{
			cout << (*it).second << endl;
		}
	}
	return 0;
}
