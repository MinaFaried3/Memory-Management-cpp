#include <algorithm>
#include <iostream>
// this include
#include <memory>
#include <string>
#include <vector>
using namespace std;
// SHARED POINTERS
void add1(shared_ptr<int> p)
{
    *p += 1; // internal count = 2
} // internal count = 1 ... go out scope
int main()
{
    shared_ptr<int> p1(new int);

    *p1 = 10; // internal count = 1

    add1(p1);

    cout << *p1 << endl;
    return 0;
} // internal count = 0 ... go out scope