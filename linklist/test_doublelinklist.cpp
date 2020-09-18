#include"doublelinlist.h"
#include<iostream>
using std::cout;
using std::endl;

int main()
{
	DoubleLinklist lk;
	node n[10];
	for (int i = 0; i < 10; ++i)
	{
		n[i].value = 5 + i;
		n[i].next = n[i].prev = nullptr;
	}

	lk.Insert(&n[2]);
	lk.Insert(&n[4]);
	lk.Insert(&n[3]);
	lk.Insert(&n[1]);
	lk.Insert(&n[8]);
	lk.Insert(&n[5]);
	lk.Insert(&n[0]);
	lk.ShowLinklist();
	cout << endl;
	lk.ReverseShowLinklist();
	cout << "\n";

	lk.HeadInsert(&n[1]);
	lk.HeadInsert(&n[9]);
	lk.ShowLinklist();
	cout << endl;
	lk.ReverseShowLinklist();
	cout << "\n";

	lk.PosInsert(4, &n[6]);
	lk.PosInsert(6, &n[7]);
	lk.ShowLinklist();
	cout << "\n";
	lk.DelPosElem(3);
	lk.DelPosElem(4);
	lk.ShowLinklist();
	cout << "\n";

	lk.SearchElem(2);
	lk.SearchElem(17);
	lk.SearchElem(8);
	lk.ClearLinklist();

	return 0;
}