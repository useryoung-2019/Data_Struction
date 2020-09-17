#pragma once
#include"array.h"
#include<cstring>
using namespace std;

ARRAY::ARRAY(int s)
{
	size = s;
	used = 0;
	this->arr = new int[size];
	if (this->arr == NULL)
		cout << "NEW error!\n";

	for (int i = 0; i < size; ++i)
	{
		this->arr[i] = 0;
	}
}

ARRAY::ARRAY(const ARRAY& AR)
{
	this->size = AR.size;
	this->used = AR.used;
	arr = new int[size];
	memcpy(arr, AR.arr, AR.size * sizeof(int));
}

void ARRAY::operator=(const ARRAY& AR)
{
	this->size = AR.size;
	this->used = AR.used;
	arr = new int[size];
	memcpy(arr, AR.arr, AR.size * sizeof(int));
}

void ARRAY::dump()
{
	for (int i = 0; i < this->used; ++i)
	{
		cout << "[ " << i + 1 << " ] == ";
		cout << this->arr[i] << endl;
	}
}

bool ARRAY::insert(int elem)
{
	if (this->used >= this->size)
	{
		int tempsize = this->size;
		ARRAY temp(2 * tempsize);
		temp.used = tempsize;
		memcpy(temp.arr, this->arr, this->size * sizeof(int));
		temp.arr[temp.used++] = elem;
		delete[]this->arr;

		*this = temp;
		return true;
	}

	this->arr[this->used++] = elem;
	return true;
}

void ARRAY::search(int num)
{
	for (int i = 0; i < used; ++i)
	{
		if (this->arr[i] == num)
		{
			cout << "LOCATION == " << i << endl;
			return;
		}
	}

	cout << "NO SUCH " << num << " NUMBER\n";
}

bool ARRAY::deleteelem(int num)
{
	if (num < 0 || num > this->size)
	{
		cout << "UNDEFINED AREA\n";
		return false;
	}
	else if (num > used)
	{
		cout << "UNDEFINED VALUE\n";
		return false;
	}
	else
		for (int i = num - 1; i < used - 1; ++i)
			this->arr[i] = this->arr[i + 1];
	this->used--;
	return true;
}

void ARRAY::showadd()
{
	cout << "Now array first address == ";
	cout <<  (void*)this->arr << endl;
}
