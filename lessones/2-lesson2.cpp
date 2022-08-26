#include <iostream>
using namespace std;
int main()
{
    // we can't use different ptr datatype because it decoding and encoding data in dereference

    // notice 2081 in binary = 100000100001
    // so the first byte holds the first 8 bit =  00100001
    // so the second byte holds the first 8 bit = 00001000
    // when use char pointer to get the x value it returns the first byte one because char is one byte
    // so 00100001 in decimal = 33

    int x = 2081;
    int *ptr = &x;
    char *chr = (char *)ptr;
    cout << "value of the address that stored in otr : " << (int)*chr << endl;

    // when adding 1 it move to point to the second byte it is 1000 = 8
    chr += 1;
    cout << "value of the address that stored in otr : " << (int)*chr << endl;
    // when adding 1 it move to point to the second byte it is 00
    chr += 1;
    cout << "value of the address that stored in otr : " << (int)*chr << endl;
    
    cout << "-------------------------------------------------------------------------------" << endl;
    // -------------------------------------------------------------------------------------------------
    // pointer to pointer

    int val = 5;
    int *ptr1 = &val;    // ptr to int
    int **ptr2 = &ptr1;  // ptr to(ptr to int)
    int ***ptr3 = &ptr2; // ptr to (ptr to(ptr to int))

    cout << "value of ptr1 : " << ptr1 << endl;
    cout << "address of &ptr1 : " << &ptr1 << endl;
    cout << "dereference of *ptr1 : " << *ptr1 << endl;

    cout << "value of ptr2 : " << ptr2 << endl;
    cout << "address of &ptr2 : " << &ptr2 << endl;
    cout << "dereference of *ptr2 : " << *ptr2 << endl;
    cout << "dereference of *(*ptr2) : " << *(*ptr2) << endl;

    cout << "value of ptr3 : " << ptr3 << endl;
    cout << "address of &ptr3 : " << &ptr3 << endl;
    cout << "dereference of *ptr3 : " << *ptr3 << endl;
    cout << "dereference of *(*ptr3) : " << *(*ptr3) << endl;
    cout << "dereference of *(*(*ptr3)) : " << *(*(*ptr3)) << endl;

    cout << "-------------------------------------------------------------------------------" << endl;
    // ----------------------------------------------------------------------

    cout << "value of ptr1 : " << ptr1 << " is address of &val : " << &val << endl;
    cout << "value of ptr2 : " << ptr2 << " is address of &ptr1 : " << &ptr1 << endl;
    cout << "value of ptr3 : " << ptr3 << " is address of &ptr2 : " << &ptr2 << endl;

    cout << "dereference of *ptr3 : " << *ptr1 << " is value of val : " << val << endl;
    cout << "dereference of *ptr2 : " << *ptr2 << " is value of ptr1 : " << ptr1 << endl;
    cout << "dereference of *ptr3 : " << *ptr3 << " is value of ptr2 : " << ptr2 << endl;
}