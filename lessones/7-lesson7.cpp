#include <iostream>
using namespace std;
// !run this code in visual studio not vs code
int *getDouble(int *x)
{ // called function
	int result = (*x) * 2;
	return &result;
}
int *getDouble2(int *x)
{ // called function
	int *result = new int((*x) * 2);
	return result;
}
void printName(string name)
{
	cout << "Welcome:  " << name << endl;
}

int **create2DArray(int rows, int cols)
{
	int **arr = new int *[rows];
	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	return arr;
}
int main()
{
	int x = 5;
	int *ptr = getDouble(&x);
	cout << *ptr << endl;
	// notice that if we call printName function after cout<<*ptr the result wil be 10 else will be another
	// that is happen because of call stack order the getDouble function is popped from stack and  its local variables
	// when we cout ptr before calling another function the address of result that was returned by getDouble fun still saved to the memory
	// when we call printName fun is pushed now and take place of bytes that are maybe is used to store data of result variable
	printName("Mina Faried");
	cout << *ptr << endl; // this is wrong
	cout << "---------------------------" << endl;
	int *ptr2 = getDouble2(&x);
	cout << *ptr2 << endl;
	printName("Mina Faried");
	cout << *ptr2 << endl;
	delete ptr2;

	int **arr = create2DArray(3, 5);
	delete[] arr;
}