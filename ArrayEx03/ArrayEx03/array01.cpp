//14.04.01
#include <iostream>
using namespace std;

class Array
{
public:
	Array(void);
	Array(int size);
	Array(const Array &data);
	~Array(void);
	bool SetData(int pos, int data);
	bool GetData(int pos, int &data);
private:
	int *pData;
	int maxsize;
};

Array::Array(void)
{
	maxsize = 100;
	pData = new int [maxsize];
	cout << "持失切1" << endl;
}

Array::Array(int size)
{
	maxsize = size;
	pData = new int [maxsize];
	cout << "持失切2" << endl;
}

Array::Array(const Array &data)
{
	maxsize = data.maxsize;
	//pData = data.pData;
	pData = new int [maxsize];
	memcpy(pData, data.pData, maxsize); 
	cout << "持失切3" << endl;
}

Array::~Array(void)
{
	delete [] pData;
	cout << "社瑚切" << endl;
}

bool Array::SetData(int pos, int data)
{
	if(pos < 0 || pos >= maxsize)
		return false;
	pData[pos] = data;
	return true;
}

bool Array::GetData(int pos, int &data)
{
	if(pos < 0 || pos >= maxsize)
		return false;
	data = pData[pos];
	return true;
}

int main(void)
{
	Array data(10);
	Array data1(data);
	int i, val;
	
	for(i=0 ; i<=10 ; i++)
	{
		if(!data.SetData(i, i))
			cout << "Data(" << i << ") Fail to set data" << endl;

		if(!data.GetData(i, val))
			cout << "Data(" << i << ") Fail to get data" << endl;

		else
			cout << "Data(" << i << ") = " << val << endl;
	}

	return 0;
}
