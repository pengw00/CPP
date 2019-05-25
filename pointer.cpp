#include <iostream>
using namespace std;

int main()
{
	/* code */
	//get the pointer addrece
	int fish = 5;
	cout << &fish << endl;
	//delare a pointer
	int *fishpointer;
	fishpointer = &fish;
	cout << fishpointer << endl;
	return 0;
}