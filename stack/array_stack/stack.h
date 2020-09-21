#pragma once

class Stack
{
private:
	int capcity;//ջ���������
	int size;	//��ǰջ�����ݸ���
	int* array; //����ռ�

public:
	Stack(int n = 0);
	//���������������ռ�
	~Stack();
	//ջΪ��
	bool IsFull();
	//ջΪ��
	bool IsEmpty();
	//��ȡ��ǰ����
	int GetSize();
	//��ȡ��ǰջ���������
	int GetCapcity();
	//��ջ
	bool Push(int elem);
	//��ջ�����س�ջ����
	int Pop();
	//���ջ����������
	void Clear();
};