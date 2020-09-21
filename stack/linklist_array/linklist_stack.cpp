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
	{//����ջ�ڽڵ㶼��new�����ģ���˵�������Ҫ�ͷ��ڴ�
	 //��˴˴��Ľڵ㵯������Ҫdelete��ȷ�����ڴ�й©
	 //��˲�ȡ���ؽڵ�ṹ����ʽ��������ָ���������
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
