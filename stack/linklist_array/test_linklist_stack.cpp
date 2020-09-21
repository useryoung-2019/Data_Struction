#include"linklist_stack.h"
#include<iostream>
using namespace std;

int main()
{
	Node n[5];
	Linklist_stack st;

	for (int i = 0; i < 5; ++i)
	{
		n[i].value = i + 1;
		n[i].next = NULL;
	}

	for (int i = 0; i < 5; ++i)
	{
		st.Push(&n[i]);
	}

	cout << "CAPCITY == " << st.GetCapcity() << endl;

	Node temp;
	for (int i = 0; i < 3; ++i)
	{
		temp = st.Pop();
		cout << "POP == " << temp.value << endl;
	}

	cout << "CAPCITY == " << st.GetCapcity() << endl;

	st.Clear();
	cout << "CAPCITY == " << st.GetCapcity() << endl;

	return 0;
}