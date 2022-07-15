#include <iostream>
using namespace std;

void increment_by_val(int x)
{
    // notice is not the same address
    cout << "address of &x : " << &x << endl;
    x++;
}
void increment_by_ref(int &x)
{
    // notice is the same address
    cout << "address of &x : " << &x << endl;
    x++;
}
void increment_by_ref_ptr(int *x)
{
    // notice is the same address
    cout << "address of x : " << x << endl;
    // *x++; // don't increment

    *x += 1; // increment

    // the problem with using this way is when change the address
    int y = 4;
    x = &y;
    *x += 1; // don't increment
}

int main()
{
    // call by val ,by ref
    int val = 3;
    cout << "address of &val : " << &val << endl;

    increment_by_val(val); // don't increment
    cout << "value of val : " << val << endl;

    increment_by_ref(val); // increment
    cout << "value of val : " << val << endl;

    // notice
    increment_by_ref_ptr(&val); // increment
    cout << "value of val : " << val << endl;

    // -----------------------------------------------------------
    cout << "-------------------------------------------------------------------------------" << endl;
    // reference to variable
    // it is like shallow copy (search about shallow,deep copy)
    // variable alias
    int x = 3;
    int &y = x;
    // int &x =4; //compile error

    // now the x,y points at the same node in memory  = 3
    // and holds the same address

    cout << "value of x , y : " << x << " : " << y << endl;
    y++;
    cout << "value of x : " << x << endl;
    cout << "address of x , y : " << &x << " : " << &y << endl;

    // we must initialize it,thats why thus way is more safe than pointers
    // int &c;  // throw error

    // notice the next example
    int val1 = 5;
    y = val1; // here we just override x,y to = 5;
    cout << "value of x : " << x << endl;
}