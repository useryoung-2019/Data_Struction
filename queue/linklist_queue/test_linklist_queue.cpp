#include"linklist_queue.h"
#include<iostream>
using namespace std;

int main01()
{
	Linklist_Queue que;
	//cout << sizeof(que) << endl;
	Node n[5];

	for (int i = 0; i < 5; ++i)
	{
		n[i].value = i + 3;
		n[i].next = NULL;
	}

	for (int i = 0; i < 5; ++i)
	{
		que.EnQueue(&n[i]);
	}
	cout << "CAPCITY == " << que.GetCapcity() << endl;

	for (int i = 0; i < 3; ++i)
	{
		Node temp = que.Dequeue();
		cout << temp.value << endl;
	}
	cout << "CAPCITY == " << que.GetCapcity() << endl;

	que.Clear();
	cout << "CAPCITY == " << que.GetCapcity() << endl;

	return 0;
}