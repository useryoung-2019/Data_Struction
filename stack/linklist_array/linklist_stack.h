#pragma once

struct Node
{
	int value;
	Node* next;
};//�ڵ�ṹ

class Linklist_stack
{
private:
	Node* top;//ջ��ָ��
	int capcity;//ջ�ĵ�ǰ��С
public:
	Linklist_stack();
	//��ȡ��ǰջ���ݸ���
	int GetCapcity();
	//�Ƿ�Ϊ��
	bool IsEmpty();
	//��ջ
	void Push(Node* n);
	//����ջ��Ԫ��
	Node Pop();
	//���ջ����������
	void Clear();
};