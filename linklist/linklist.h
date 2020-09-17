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
	//Ĭ�Ϲ��캯��
	Linklist();
	void AddNode(node* n);
	//insert����β�巨������ڵ�ĺ���
	void Insert(int pos, node* n);
	void DelNode(int pos);
	int GetLinklistSize();
	void FindNode(int value);
	void FreeNode();
	void PrintLinklist();
	void ReverseLinklist();
};
