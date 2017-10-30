#include <iostream>
using namespace std;

class Counter
{
public:
	Counter(void);
	~Counter(void);
	void Reset(void);
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

void Counter::Reset(void)
{
	count = 0;
}

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
	Counter ct;
	//ct.Reset();
	ct.Click();
	ct.Click();
//	ct.count=-1;
	cout << ct.GetCount();
	cout << endl;
	return 0;
}

