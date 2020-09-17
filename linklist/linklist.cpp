#include"linklist.h"

Linklist::Linklist()
{
	this->size = 0;
	this->head = new node;
	head->value = 0;
	head->next = NULL;
}


void Linklist::AddNode(node* n)
{
	node* temp = new node;
	temp->value = n->value;

	if (n == NULL)
	{
		cout << "ERROR NODE\n";
		return;
	}
	else if(!this->head->next)
	{
		this->head->next = temp;
		temp->next = NULL;
		this->size++;
	}
	else 
	{
		node* pnode = this->head;

		for (int i = 0; i < size; ++i)
		{
			pnode = pnode->next;
		}
		
		pnode->next = temp;
		temp->next = NULL;
		this->size++;
	}
}

void Linklist::Insert(int pos, node* n)
{
	node* temp = new node;
	temp->value = n->value;

	if (pos <= 0 || pos > this->size)
	{
		cout << "NO SUCH NODE\n";
		return;
	}
	else
	{
		node* pnode = this->head;

		for (int i = 0; i < pos; ++i)
		{
			pnode = pnode->next;
		}
		
		temp->next = pnode->next;
		pnode->next = temp;
		this->size++;

	}
}

void Linklist::DelNode(int pos)
{
	if (pos <= 0 || pos > size)
	{
		cout << "NO SUCH NODE\n";
		return;
	}

	node* pnode = this->head;

	for (int i = 0; i < pos-1; ++i)
	{
		pnode = pnode->next;
	}
	
	node* temp = pnode->next;
	pnode->next = pnode->next->next;
	this->size--;
	delete[]temp;
}

int Linklist::GetLinklistSize()
{
	return this->size;
}

void Linklist::FindNode(int value)
{
	node* pnode = this->head;
	int flag = 0;

	for (int i = 0; i < size; ++i)
	{
		pnode = pnode->next;

		if (pnode->value == value)
		{
			cout << "[ " << i << " ] ==" << value << endl;
			flag++;
		}
			
	}

	if (!flag)
		cout << "NO SUCH NUMBER YOU WANT\n";
}

void Linklist::FreeNode()
{
	if (!this->size)
		cout << "Linklist is empty\n";
	else
	{
		node* pnode = this->head;

		for (int i = 0; i <= this->size; ++i)
		{
			
			node* temp = pnode;
			pnode = pnode->next;
			delete temp;
		}
	}
}

void Linklist::PrintLinklist()
{
	if (!this->size)
	{
		cout << "NO DATA TO READ\n";
		return;
	}
	else
	{
		node* pnode = this->head;
		for (int i = 0; i < this->size; ++i)
		{
			cout << "[ " << i + 1 << " ] == " << pnode->next->value << endl;
			pnode = pnode->next;
		}
	}
}

void Linklist::ReverseLinklist()
{
	if (!this->size)
	{
		cout << "NO DATA TO READ\n";
		return;
	}
	else
	{
		node* pnode = head->next;
		node* temp;

		while (pnode->next)
		{
			temp = pnode->next;
			pnode->next = temp->next;
			temp->next = head->next;
			head->next = temp;
		}
	}

}




