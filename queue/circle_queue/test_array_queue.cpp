#include<iostream>
#include"array_queue.h"
using namespace std;

int main()
{
	Array_Queue que(5);
	
	for (int i = 0; i < 5; ++i)
	{
		que.Enqueue(i + 2);
	}
	cout << "CAPCITY == " << que.GetSize() << endl;
	
	que.Enqueue(1);

	for (int i = 0; i < 4; ++i)
	{
		cout << que.Dequeue() << endl;
	}
	cout << "CAPCITY == " << que.GetSize() << endl;

	for (int i = 0; i < 3; ++i)
	{
		que.Enqueue(i);
	}

	cout << "CAPCITY == " << que.GetSize() << endl <<endl;
	que.ShowQueue();
	cout << endl;

	for (int i = 0; i < 2; ++i)
	{
		cout << que.Dequeue() << endl;
	}
	cout << "CAPCITY == " << que.GetSize() << endl;

	que.Clear();
	cout << "CAPCITY == " << que.GetSize() << endl;

	return 0;
}