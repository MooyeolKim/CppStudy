#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef multimap<int, string>::iterator year_movie_it;

int main(void)
{
	multimap<int, string> year_movie_map;
	pair<int, string> year_movie[] = {
		make_pair(1998, "타이타닉"),
		make_pair(2008, "슬럼독 밀리어네어"),
		make_pair(1997, "인생은 아름다워"),
		make_pair(2003, "올드보이"),
		make_pair(1994, "라이온킹"),
		make_pair(1999, "매트릭스"),
		make_pair(1994, "포레스트검프")
	};
		
	for(int i=0 ; i<sizeof(year_movie)/sizeof(pair<int, string>) ; i++)
	{
		year_movie_map.insert(year_movie[i]);
	}

	cout << "연도를 입력하세요 : ";
	int input;
	cin >> input;

	pair<year_movie_it, year_movie_it> result = year_movie_map.equal_range(input);
	if(result.first == result.second)
	{
		cout << "그 해에 명작 영화가 없습니다." << endl;
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
