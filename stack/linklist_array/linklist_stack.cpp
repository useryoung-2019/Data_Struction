#include"linklist_stack.h"
#include<iostream>
using std::cout;
using std::endl;

Linklist_stack::Linklist_stack()
{
	capcity = 0;
	top = NULL;
}

int Linklist_stack::GetCapcity()
{
	return this->capcity;
}

bool Linklist_stack::IsEmpty()
{
	if (this->top)
		return false;
	return true;
}

void Linklist_stack::Push(Node* n)
{
	Node* node = new Node;
	node->value = n->value;
	node->next = NULL;

	if (this->IsEmpty())
		top = node;
	else
	{
		node->next = top;
		top = node;
	}

	capcity++;
}

Node Linklist_stack::Pop()
{
	Node temp;
	temp.next = 0;
	temp.next = NULL;

	if (this->IsEmpty())
	{
		cout << "stack is empty\n";
		return temp;
	}
	else
	{//由于栈内节点都是new出来的，因此弹出后需要释放内存
	 //因此此处的节点弹出后需要delete，确保无内存泄漏
	 //因此采取返回节点结构的形式，而不是指针或者引用
		temp = *top;
		Node* pnode = top;
		
		top = top->next;
		capcity--;
		delete pnode;
		
		return temp;
	}
}

void Linklist_stack::Clear()
{
	if (this->IsEmpty())
	{
		cout << "stack is empty\n";
		return;
	}
	else
	{
		Node* pnode;
		
		while (top != NULL)
		{
			pnode = top;
			top = top->next;
			capcity--;

			delete pnode;
		}
	}
}
