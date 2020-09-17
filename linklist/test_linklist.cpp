#include"linklist.h"

int main()
{
	Linklist lk;
	node n1 = { 2 };
	node n2 = { 8 };
	node n3 = { 15 };
	node n4 = { 20 };
	node n5 = { 36 };

	lk.AddNode(&n1);
	lk.AddNode(&n2);
	lk.AddNode(&n3);
	lk.AddNode(&n4);
	lk.PrintLinklist();
	cout << "size == " << lk.GetLinklistSize() << endl;
	lk.Insert(3, &n1);
	lk.PrintLinklist();
	cout << "size == " << lk.GetLinklistSize() << endl;
	lk.AddNode(&n5);
	lk.Insert(2, &n4);
	lk.Insert(4, &n3);
	lk.PrintLinklist();
	cout << "size == " << lk.GetLinklistSize() << endl;
	lk.DelNode(2);
	lk.PrintLinklist();
	cout << "size == " << lk.GetLinklistSize() << endl;
	lk.FindNode(16);
	lk.FindNode(2);
	lk.ReverseLinklist();
	lk.PrintLinklist();

	return 0;
};
