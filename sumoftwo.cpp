// C++ Program to Demonstrating
// returning of a local array from
// a function Using Static Array
#include <iostream>
using namespace std;

int* fun()
{
	static int arr[100];

	// Some operations on arr[]
	arr[0] = 10;
	arr[1] = 20;

	return arr;
}

int main()
{
	int* ptr = fun();
	cout << ptr[0] << " " << ptr[1];
	return 0;
}
