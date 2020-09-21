#pragma once

struct Node
{
	int value;
	Node* next;
};//节点结构

class Linklist_stack
{
private:
	Node* top;//栈顶指针
	int capcity;//栈的当前大小
public:
	Linklist_stack();
	//获取当前栈数据个数
	int GetCapcity();
	//是否为空
	bool IsEmpty();
	//入栈
	void Push(Node* n);
	//弹出栈顶元素
	Node Pop();
	//清除栈内所有数据
	void Clear();
};