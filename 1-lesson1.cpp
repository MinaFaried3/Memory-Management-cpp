#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    // to get the address of x
    // get the first address byte of 4 bytes that are reserved for int size
    cout << "address of x : " << &x << endl;

    // ----------------------------------------------------
    cout << "-------------------------------------------------------------------------------" << endl;
    // create pointer
    int *ptr = &x;
    cout << "value of ptr : " << ptr << endl;
    cout << "address of ptr : " << &ptr << endl;
    //  how to get value of x using ptr
    cout << "value of the address that stored in ptr : " << *ptr << endl;

    // ---------------------------------------------------
    cout << "-------------------------------------------------------------------------------" << endl;
    int *otr = &x;
    cout << "address of otr : " << otr << endl;
    //  after + 1 we change the value of the pointer that is x
    //  increase by 4 byte because it is int
    otr = otr + 1;
    cout << "address of otr + 1 : " << otr << endl;
    cout << "value of the address that stored in otr : " << *otr << endl;

    // --------------------------------------------------
    cout << "-------------------------------------------------------------------------------" << endl;
    // notice that with char data type we use int for type casting
    char c = 'c';
    char *chr = &c;
    cout << "address of chr : " << (int)chr << endl;
    cout << "value of the address that stored in chr : " << (int)*chr << endl;
    chr = chr + 1;
    cout << "address of chr + 1 : " << (int)chr << endl;
    cout << "value of the address that stored in chr : " << (int)*chr << endl;
}