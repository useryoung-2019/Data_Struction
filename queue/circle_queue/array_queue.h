#pragma once

class Array_Queue
{
private:
	int capcity;//队列容量
	int size;//队列数据的大小，此数据可以用head和tail算出，直接声明这样方便
	int head;//头部下标
	int tail;//尾部下标
	int* queue;//数组内存空间
public:
	//new一个内存空间
	Array_Queue(int n = 0);
	//delete内存空间
	~Array_Queue();
	//是否为满
	bool IsFull();
	//是否为满
	bool IsEmpty();
	//获取当前最大容量
	int GetCapcity();
	//获取当前数据个数
	int GetSize();
	//入队
	bool Enqueue(int elem);
	//出队
	int Dequeue();
	//清除队列所有数据
	void Clear();
	//打印数据
	void ShowQueue();
};