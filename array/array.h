#pragma once
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class ARRAY
{
private:
	int size;
	int used;
	int* arr;

public:
	//Ĭ�Ϲ��캯��
	ARRAY(int s = 0, int u = 0);
	//���ƹ��캯��
	ARRAY(const ARRAY& AR);
	//��������
	~ARRAY() { delete[]arr; }
	//���ظ�ֵ�����
	void operator=(const ARRAY& AR);
	//��ӡ��������Ԫ��
	void dump();
	//����Ԫ��
	bool insert(int elem);
	//����ֵԪ��
	void search(int num);
	//ɾ��ĳ��Ԫ��
	bool deleteelem(int num);
};