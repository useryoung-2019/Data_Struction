#include"array.h"

int main()
{
	ARRAY myarray(3);
	ARRAY hisarray(3);

	myarray.insert(1);
	myarray.insert(3);
	myarray.insert(6);
	myarray.dump();
	myarray.showadd();
	myarray.search(4);
	myarray.search(3);

	hisarray = myarray;
	hisarray.dump();
	hisarray.showadd();

	myarray.insert(20);
	myarray.dump();
	myarray.showadd();
	

	return 0;
}