#pragma once
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class ARRAY
{
private:
	int size;
	int used;
	int* arr;

public:
	//默认构造函数
	ARRAY(int s = 0, int u = 0);
	//复制构造函数
	ARRAY(const ARRAY& AR);
	//析构函数
	~ARRAY() { delete[]arr; }
	//重载赋值运算符
	void operator=(const ARRAY& AR);
	//打印所有数组元素
	void dump();
	//插入元素
	bool insert(int elem);
	//搜索值元素
	void search(int num);
	//删除某个元素
	bool deleteelem(int num);
};