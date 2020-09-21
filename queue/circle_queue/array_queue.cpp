#include"array_queue.h"
#include<iostream>
using std::cout;
using std::endl;

Array_Queue::Array_Queue(int n)
{
	capcity = n;
	size = 0;
	head = tail = 0;
	queue = new int[capcity];
	if (!queue)
		cout << "new error\n";
}

Array_Queue::~Array_Queue()
{
	if (queue)
		delete[]queue;
}

bool Array_Queue::IsFull()
{
	if (size == capcity && capcity > 0)
		return true;
	return false;
}

bool Array_Queue::IsEmpty()
{
	if (size == 0 && capcity > 0)
		return true;
	return false;
}

int Array_Queue::GetCapcity()
{
	if (capcity > 0)
		return capcity;
	else
	{
		cout << "queue is not exist\n";
		return -1;
	}
}

int Array_Queue::GetSize()
{
	if (capcity > 0)
		return size;
	else
	{
		cout << "queue is not exist\n";
		return -1;
	}
}

bool Array_Queue::Enqueue(int elem)
{
	if (this->IsFull())
	{
		cout << "queue is full\n";
		return false;
	}
	else
	{
		queue[(tail++) % capcity] = elem;
		size++;
		return true;
	}
}

int Array_Queue::Dequeue()
{
	if (this->IsEmpty())
	{
		cout << "queue is empty\n";
		return 0;
	}
	else
	{
		int temp = queue[head];
		head = (head + 1) % capcity;
		size--;
		return temp;
	}
}

void Array_Queue::Clear()
{
	head = tail = size = 0;
}

void Array_Queue::ShowQueue()
{
	int count = head;
	for (int i = 0; i < size; ++i)
	{
		if (count >= capcity)
			count %= capcity;
		cout << queue[count] << endl;
		count++;
	}
}


