#include <iostream>
using namespace std;

class Counter
{
public:
	Counter(void);
	~Counter(void);
	//void Reset(void);
	void Click(void);
	int GetCount(void);
private:
	int count;
};

Counter::Counter(void)
{
	count = 0;
	cout << "Constuctor" << endl;
}

Counter::~Counter(void)
{
	cout << "Distructor" << endl;
}

/*void Counter::Reset(void)
{
	count = 0;
}*/

void Counter::Click(void)
{
	count++;
}

int Counter::GetCount(void)
{
	return count;
}

int main(void)
{
	//Counter *pCounter = new Counter[5];
	Counter *pCounter = (Counter *)malloc(sizeof(Counter)*5);

	for(int i=0 ; i<5 ; i++)
	{
		/*pCounter[i].Click();
		pCounter[i].Click();
		cout << pCounter[i].GetCount() << endl;*/

		(pCounter+i)->Click();
		(pCounter+i)->Click();
		cout << (pCounter+i)->GetCount() << endl;
	}

	//delete [] pCounter;
	free(pCounter);
	return 0;
}

