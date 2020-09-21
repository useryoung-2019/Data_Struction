#pragma once

class Stack
{
private:
	int capcity;//栈的最大容量
	int size;	//当前栈中数据个数
	int* array; //数组空间

public:
	Stack(int n = 0);
	//析构掉申请的数组空间
	~Stack();
	//栈为满
	bool IsFull();
	//栈为空
	bool IsEmpty();
	//获取当前个数
	int GetSize();
	//获取当前栈的最大容量
	int GetCapcity();
	//入栈
	bool Push(int elem);
	//出栈并返回出栈数据
	int Pop();
	//清空栈内所有数据
	void Clear();
};