#include"array.h"

int main()
{
	ARRAY myarrry(5, 0);

	myarrry.insert(3);
	myarrry.insert(9);
	myarrry.insert(20);
	myarrry.insert(4);
	myarrry.dump();
	myarrry.deleteelem(2);
	myarrry.dump();
	myarrry.insert(15);
	myarrry.dump();
	myarrry.search(24);
	myarrry.search(4);

	return 0;
}
