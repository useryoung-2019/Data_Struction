#include"stack.h"
#include<iostream>
using std::cout;
using std::endl;

Stack::Stack(int n)
{
	capcity = n;
	size = 0;
	array = new int[capcity];
}

Stack::~Stack()
{
	delete[]array;
}

bool Stack::IsFull()
{
	if (size == capcity && capcity)
		return true;
	return false;
}

bool Stack::IsEmpty()
{
	if (capcity && size == 0)
		return true;
	return false;
}

int Stack::GetSize()
{
	if (capcity)
		return size;
	return 0;
}

int Stack::GetCapcity()
{
	return capcity;
}

bool Stack::Push(int elem)
{
	if (this->IsFull())
	{
		cout << "stack is full\n";
		return false;
	}
	else
	{
		array[size++] = elem;
		return true;
	}
}

int Stack::Pop()
{
	if (this->IsEmpty())
	{
		cout << "stack is empty\n";
		return NULL;
	}
	else
	{
		return array[--size];
	}
}

void Stack::Clear()
{
	size = 0;
	cout << "clear over\n";
}



