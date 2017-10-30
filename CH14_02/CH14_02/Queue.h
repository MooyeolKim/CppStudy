//14.04.09
template <typename T>
class Queue
{
public:
	Queue(int size=100);
	~Queue(void);

	bool Push(const T &value);
	bool Front(T &value);
	bool Pop();
	bool Empty();

private:
	int front;
	int rear;
	int size;
	int count;
	T *data;
};

template <typename T>
Queue<T>::Queue(int size)
{
	front = 0;
	rear = -1;
	count = 0;
	this->size = size;
	data = new T[size];
}

template <typename T>
Queue<T>::~Queue()
{
	delete [] data;
}

template <typename T>
bool Queue<T>::Empty()
{
	return (count == 0);
}

template <typename T>
bool Queue<T>::Push(const T &value)
{
	if(count >= size)
		return false;

	rear = (rear+1)%size;
	count ++;
	data[rear] = value;
	return true;
}

template <typename T>
bool Queue<T>::Front(T &value)
{
	if(Empty())
		return false;

	value = data[front];
	return true;
}

template <typename T>
bool Queue<T>::Pop()
{
	if(Empty())
		return false;

	front = (front+1)%size;
	count--;
	return true;
}