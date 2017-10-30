#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string filename[] = {"readme.txt", "presentation.ppt", "word.doc", "manual.pdf", "plain.txt"};

	for(int i=0 ; i<sizeof(filename)/sizeof(string) ; i++)
	{
		int period = filename[i].rfind('.'); //ó���ӵ��� ���̱����� find ��� rfind�� ���
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