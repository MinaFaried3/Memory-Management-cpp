#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//! high order function
//! pointer to functions
int sum(int n1, int n2)
{
    return n1 + n2;
}
int multi(int n1, int n2)
{
    return n1 * n2;
}
// passing function as parameter
int compute(int a, int b, int (*funPtr)(int, int))
{
    return (*funPtr)(a, b);
}

int main()
{
    // ptr to function
    int (*funPtr)(int, int);
    // points to sum
    funPtr = &sum;
    int val = (*funPtr)(5, 3);
    cout << "val = " << val << endl;
    // array of ptr to functions
    int (*ptrs[2])(int x, int y);

    ptrs[0] = sum;
    ptrs[1] = multi;

    int val1 = (*ptrs[0])(3, 3);
    int val2 = (*ptrs[1])(3, 3);
    cout << "val1 = " << val1 << endl;
    cout << "val2 = " << val2 << endl;

    int val3 = compute(8, 4, &sum);
    cout << "val3 = " << val3 << endl;
}