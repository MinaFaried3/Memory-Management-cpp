#include <iostream>
using namespace std;
void fun1(int &a) {}
void fun2(const int &a) {}
void fun3(int *a) {}

// test 1, 2, 3 are actually SAME for compiler
void test1(int arr[]) {}          // pointer to an element
void test2(int arr[5]) {}         // pointer to an element
void test3(int *ptr) {}           // pointer to an element
void test4(int (&arr)[5]) {}      // reference to an array.Force array of size 5
void test11(int arr[][10]) {}     // pointer to an array
void test22(int arr[5][10]) {}    // pointer to an array
void test33(int (*ptr)[10]) {}    // pointer to an array
void test44(int (&arr)[5][10]) {} // reference to an array.Force array of size 5 * 10

/*
But WHY in 2d array case we need to pass 2nd dimension?
Then how to know cell address in memory?!!!!
Where is arr[2][3]?
It exist at 2 * 10+3-th element starting from array start
*/

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

    // -----------------------------------------------------------------------------------------
    int *salary;       // bad practice => garbage
    int *grade = NULL; // best practice
    // *grade = 10; //wrong because the address of pointer is null
    cout << salary << " " << grade << endl;

    // !notice don't return any thing in function before delete pointers
    // return 0; // bad practice => memory leak

    int *ptr1 = new int[8], *ptr2 = new int[8], *ptr3 = new int[8];
    delete ptr1; // WRONG, it should be delete[]
    ptr1 = NULL; // best practice

    int *ptr = ptr2;
    ++ptr;        // move to next memory position
    delete[] ptr; //  WRONG, delete from array start

    // -----------------------------------------------------------------

    // Don't cast between primitives..unless you know what you really do
    short shortVal1 = 1;
    int *pIntPtr1 = (int *)&shortVal1;
    *pIntPtr1 = 2147483647; // Corrupt memory, change in 4 bytes not 2
    cout << "pIntPtr1"
         << "\n"; // may crash now

    // Don't get part of the memory!
    // This is true for little endian but not big endian!
    int value = 770;                           // 11 00000010
    char secondByte = *(((char *)&value) + 1); // right way using bits(later)

    cout << (int)secondByte << "\n"; // 3 on Intel x86 processor(little endian)

    // -----------------------------------------------------------------

    // c++ casting
    // Don't use C style case - No compiler time checking
    // Use static case

    int *pIntPtr2 = static_cast<int *>(&value); //right because value is int 
    // int *pIntPtr2 = static_cast<int *>(&shortVal1); //wrong because shortVal1 is short 
}