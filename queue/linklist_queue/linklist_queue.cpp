#include"linklist_queue.h"
#include<iostream>
using std::cout;
using std::endl;

Linklist_Queue::Linklist_Queue()
{
	capcity = 0;
	head = tail = NULL;
}

int Linklist_Queue::GetCapcity()
{
	if (this->IsEmpty())
	{
		cout << "queue is empty\n";
		return 0;
	}
	else
		return capcity;
}

bool Linklist_Queue::IsEmpty()
{
	if (capcity > 0)
		return false;
	else if (capcity == 0)
		return true;
	else
	{
		cout << "queue err\n";
		return false;
	}
}

void Linklist_Queue::EnQueue(Node* n)
{
	Node* pnode = new Node;
	pnode->value = n->value;
	pnode->next = NULL;

	if (this->IsEmpty())
	{
		head = pnode;
		tail = pnode;
	}
	else
	{
		tail->next = pnode;
		tail = pnode;
	}

	capcity++;
}

Node Linklist_Queue::Dequeue()
{
	Node temp;
	temp.value = 0;
	temp.next = NULL;

	if (this->IsEmpty())
	{
		cout << "Queue is not exist\n";
	}
	else
	{
		temp = *head;
		Node* pnode = head;
		head = head->next;
		delete pnode;
		capcity--;
	}

	return temp;
}

void Linklist_Queue::Clear()
{
	if (this->IsEmpty())
		cout << "queue is not exist\n";
	else
	{
		Node* pnode = head;
		while (pnode != NULL)
		{
			head = head->next;
			delete pnode;
			pnode = head;
			capcity--;
		}
		
	}
}
