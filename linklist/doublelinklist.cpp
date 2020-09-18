#include"doublelinlist.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

DoubleLinklist::DoubleLinklist()
{
	this->size = 0;
	this->head = new node;
	this->head->value = NULL;
	this->head->prev = this->head->next = NULL;
	this->tail = new node;
	this->tail->next = this->tail->prev = NULL;
	this->tail->value = NULL;
}

DoubleLinklist::~DoubleLinklist()
{
	delete[]head;
	delete[]tail;
}

int DoubleLinklist::GetSize()
{
	cout << "NOW LINKLIST SIZE == ";
	cout << this->size << endl;
	
	return this->size;
}

bool DoubleLinklist::IsEmpty()
{
	if (this->size)
		return false;
	else
		return true;
}

void DoubleLinklist::Insert(node* n)
{
	if (n)
	{
		node* temp = new node;
		temp->next = temp->prev = NULL;
		temp->value = n->value;

		if (this->IsEmpty())
		{
			this->head->next = temp;
			temp->next = this->tail;
			this->tail->prev = temp;
			temp->prev = this->head;
		}
		else
		{
			node* pnode = this->tail->prev;
			pnode->next = temp;
			temp->next = this->tail;
			this->tail->prev = temp;
			temp->prev = pnode;
		}

		this->size++;
	}
	else
	{
		cout << "UNDEFINE NODE\n";
	}
	
}

void DoubleLinklist::HeadInsert(node* n)
{
	if (n)
	{
		node* temp = new node;
		temp->next = temp->prev = NULL;
		temp->value = n->value;

		if (this->IsEmpty())
		{
			this->head->next = temp;
			temp->next = this->tail;
			this->tail->prev = temp;
			temp->prev = this->head;
		}
		else
		{
			node* pnode = this->head->next;
			this->head->next = temp;
			temp->next = pnode;
			pnode->prev = temp;
			temp->prev = this->head;
		}
		this->size++;
	}
	else
	{
		cout << "UNDEFINED NODE\n";
	}
}

void DoubleLinklist::PosInsert(int pos, node* n)
{
	if (n)
	{
		node* temp = new node;
		temp->next = temp->prev = NULL;
		temp->value = n->value;

		if (pos > this->size || pos < 0)
		{
			cout << "NO SUCH POSITION, DEFULT INSERT IT IN THE END\n";
			this->Insert(n);
		}
		else if (pos == this->size)
			this->Insert(n);
		else if (pos == 0)
			this->HeadInsert(n);
		else
		{
			node* pnode;
			if (pos <= (this->size / 2))
			{
				pnode = this->head;
				for (int i = 0; i < pos; ++i)
				{
					pnode = pnode->next;
				}
				temp->next = pnode->next;
				temp->prev = pnode;
				pnode->next->prev = temp;
				pnode->next = temp;
			}
			else
			{
				pnode = this->tail;
				for (int i = 0; i < (this->size - pos + 1); ++i)
				{
					pnode = pnode->prev;
				}
				temp->next = pnode->next;
				temp->prev = pnode;
				pnode->next->prev = temp;
				pnode->next = temp;
			}
		}
		this->size++;
	}
	else
	{
		cout << "UNDEFINED NODE\n";
	}
}

void DoubleLinklist::GetPosElem(int pos)
{
	if (pos <= 0 || pos > this->size)
		cout << "NO SUCH POSITION\n";
	else
	{
		node* pnode;

		if (pos <= (this->size / 2))
		{
			pnode = head;
			for (int i = 0; i < pos; ++i)
			{
				pnode = pnode->next;
			}
		}
		else
		{
			pnode = tail;
			for (int i = 0; i < (this->size + 1 - pos); ++i)
			{
				pnode = pnode->prev;
			}
		}

		cout << "POSITION [" << pos << "] == ";
		cout << pnode->value << endl;
	}
}

void DoubleLinklist::SearchElem(int elem)
{
	if (this->IsEmpty())
		cout << "NO DATA!\n";
	else
	{
		node* temp = this->head;
		int flags = 0;

		for (int i = 0; i < this->size; ++i)
		{
			temp = temp->next;
			if (temp->value == elem)
			{
				flags++;
				cout << "FIND IT, POSITION == ";
				cout << i+1 << endl;
			}
		}

		if(!flags)
			cout << "THERE IS NO DATA YOU WANT\n";
	}
}

void DoubleLinklist::DelPosElem(int pos)
{
	node* temp;

	if (pos <= 0 || pos > this->size)
		cout << "POSITION ERROR\n";
	else if (pos == 1)
	{
		temp = this->head->next;
		head->next = temp->next;
		temp->next->prev = head;
		
		delete temp;
	}
	else if (pos == this->size)
	{
		temp = this->tail->prev;
		tail->prev = temp->prev;
		temp->prev->next = this->tail;

		delete temp;
	}
	else
	{
		temp = this->head;

		for (int i = 0; i < pos; ++i)
		{
			temp = temp->next;
		}
		
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		delete temp;
	}

	this->size--;
}

void DoubleLinklist::ShowLinklist()
{
	if (this->IsEmpty())
		cout << "LINKLIST NULL\n";
	else
	{
		node* temp = this->head;
		for (int i = 0; i < this->size; ++i)
		{
			temp = temp->next;
			cout << "[" << i + 1 << "] == " << temp->value << endl;
		}
	}
}

void DoubleLinklist::ReverseShowLinklist()
{
	if (this->IsEmpty())
		cout << "LINKLIST NULL\n";
	else
	{
		node* temp = this->tail;
		for (int i = 0; i < this->size; ++i)
		{
			temp = temp->prev;
			cout << "[" << i + 1 << "] == " << temp->value << endl;
		}
	}
}

void DoubleLinklist::ClearLinklist()
{
	if (this->IsEmpty())
		cout << "LINKLIST NULL\n";
	else
	{
		node* temp = this->head->next;

		for (int i = 0; i < this->size; ++i)
		{
			temp = temp->next;
			delete temp->prev;
		}
	}
}

