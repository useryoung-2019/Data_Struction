#include"stack.h"
#include<iostream>
using namespace std;

int main01()
{
	Stack st(3);
	st.Push(2);
	st.Push(8);
	st.Push(1);
	st.Push(5);

	for (int i = 0; i < 2; ++i)
	{
		cout << st.Pop() << endl;
	}

	cout << "CAPCITY == " << st.GetCapcity() << endl;
	cout << "SIZE == " << st.GetSize() << endl;

	st.Clear();
	st.Push(20);
	st.Push(18);
	st.Push(15);
	st.Push(23);

	cout << "CAPCITY == " << st.GetCapcity() << endl;
	cout << "SIZE == " << st.GetSize() << endl;
	return 0;

}