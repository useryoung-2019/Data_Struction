#pragma once
typedef struct Node
{
	int value;
	Node* prev;
	Node* next;
}node;

class DoubleLinklist
{
private:
	int size;
	node* head;
	node* tail;
public:
	DoubleLinklist();
	~DoubleLinklist();
	//获取链表大小
	int GetSize();
	//判断是否为空
	bool IsEmpty();
	//尾插法插入元素节点
	void Insert(node* n);
	//头插法插入元素节点
	void HeadInsert(node* n);
	//指定位置后插入数据
	void PosInsert(int pos, node* n);
	//获取指定位置元素，并打印
	void GetPosElem(int pos);
	//搜索指定元素并打印位置
	void SearchElem(int elem);
	//删除指定元素
	void DelPosElem(int pos);
	//打印链表
	void ShowLinklist();
	//反转打印链表
	void ReverseShowLinklist();
	//清除所有数据
	void ClearLinklist();
};