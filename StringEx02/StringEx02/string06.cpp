#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string filename[] = {"readme.txt", "presentation.ppt", "word.doc", "manual.pdf", "plain.txt"};

	for(int i=0 ; i<sizeof(filename)/sizeof(string) ; i++)
	{
		int period = filename[i].rfind('.'); //처리속도를 높이기위해 find 대신 rfind를 사용
		if(period != string::npos)
		{
			string extension = filename[i].substr(period);
			if(extension.compare(".txt") == 0)
			{
				cout << filename[i] << endl;
			}
		}
	}
	
	return 0;
}