#include <iostream>
using namespace std;
void fun1(int &a) {}
void fun2(const int &a) {}
void fun3(int *a) {}
int main()
{
    int x = 10;
    int *y = new int;

    fun1(x);
    // fun1(y); can't send pointer
    // fun1(5); can't send constant

    fun2(x);
    // fun2(y); can't send pointer
    fun2(5); // constant is ok

    fun3(&x);
    fun3(y);
    //   fun3(5); can't send constant
}