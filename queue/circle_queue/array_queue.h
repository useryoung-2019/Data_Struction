#pragma once

class Array_Queue
{
private:
	int capcity;//��������
	int size;//�������ݵĴ�С�������ݿ�����head��tail�����ֱ��������������
	int head;//ͷ���±�
	int tail;//β���±�
	int* queue;//�����ڴ�ռ�
public:
	//newһ���ڴ�ռ�
	Array_Queue(int n = 0);
	//delete�ڴ�ռ�
	~Array_Queue();
	//�Ƿ�Ϊ��
	bool IsFull();
	//�Ƿ�Ϊ��
	bool IsEmpty();
	//��ȡ��ǰ�������
	int GetCapcity();
	//��ȡ��ǰ���ݸ���
	int GetSize();
	//���
	bool Enqueue(int elem);
	//����
	int Dequeue();
	//���������������
	void Clear();
	//��ӡ����
	void ShowQueue();
};