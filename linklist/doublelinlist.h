#pragma once
typedef struct Node
{
	int value;
	Node* prev;
	Node* next;
}node;

class DoubleLinklist
{
private:
	int size;
	node* head;
	node* tail;
public:
	DoubleLinklist();
	~DoubleLinklist();
	//��ȡ�����С
	int GetSize();
	//�ж��Ƿ�Ϊ��
	bool IsEmpty();
	//β�巨����Ԫ�ؽڵ�
	void Insert(node* n);
	//ͷ�巨����Ԫ�ؽڵ�
	void HeadInsert(node* n);
	//ָ��λ�ú��������
	void PosInsert(int pos, node* n);
	//��ȡָ��λ��Ԫ�أ�����ӡ
	void GetPosElem(int pos);
	//����ָ��Ԫ�ز���ӡλ��
	void SearchElem(int elem);
	//ɾ��ָ��Ԫ��
	void DelPosElem(int pos);
	//��ӡ����
	void ShowLinklist();
	//��ת��ӡ����
	void ReverseShowLinklist();
	//�����������
	void ClearLinklist();
};