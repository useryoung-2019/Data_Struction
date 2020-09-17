#pragma once
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

typedef struct Node
{
	int value;
	Node* next;
}node;

class Linklist
{
private:
	node* head;
	int size;
public:
	//默认构造函数
	Linklist();
	void AddNode(node* n);
	//insert采用尾插法，插入节点的后面
	void Insert(int pos, node* n);
	void DelNode(int pos);
	int GetLinklistSize();
	void FindNode(int value);
	void FreeNode();
	void PrintLinklist();
	void ReverseLinklist();
};
