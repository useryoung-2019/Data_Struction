#pragma once

struct Node
{
	int value;
	Node* next;
};//�ڵ�ṹ

class Linklist_Queue
{
private:
	Node* head;//ͷָ��
	Node* tail;//βָ��
	int capcity;//��ǰ���е����ݸ���
public:
	Linklist_Queue();
	~Linklist_Queue() {};

	int GetCapcity();
	bool IsEmpty();
	//���
	void EnQueue(Node* n);
	//����
	Node Dequeue();
	//��������������ݣ��ͷ��ڴ�
	void Clear();
};