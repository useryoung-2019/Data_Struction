#include"array.h"
#include<cstring>

ARRAY::ARRAY(int s, int u)
{
	size = s;
	used = u;
	this->arr =  new int[size];
	if (this->arr == NULL)
		cout << "NEW error!\n";
	
	for (int i = 0; i < used; ++i)
	{
		this->arr[i] = 0;
	}
}

ARRAY::ARRAY(const ARRAY& AR)
{
	this->size = AR.size;
	this->used = AR.used;
	arr = new int[size];
	memcpy(arr, AR.arr, sizeof(AR));
}

void ARRAY::operator=(const ARRAY& AR)
{
	this->size = AR.size;
	this->used = AR.used;
	arr = new int[size];
	memcpy(arr, AR.arr, sizeof(AR));
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
	if (this->used > this->size)
	{
		cout << "AERA ALREADY FULL\n";
		return false;
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

	cout << "NO SUCH "<< num << " NUMBER\n";
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




