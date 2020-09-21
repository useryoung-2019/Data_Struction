#pragma once

struct Node
{
	int value;
	Node* next;
};//节点结构

class Linklist_Queue
{
private:
	Node* head;//头指针
	Node* tail;//尾指针
	int capcity;//当前队列的数据个数
public:
	Linklist_Queue();
	~Linklist_Queue() {};

	int GetCapcity();
	bool IsEmpty();
	//入队
	void EnQueue(Node* n);
	//出列
	Node Dequeue();
	//清除队列所有数据，释放内存
	void Clear();
};