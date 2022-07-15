#include <iostream>
using namespace std;
int main()
{
     int arr[5] = {10, 20, 30, 40, 50};
     int *ptr = arr + 2; // point to 3rd element, 30
     int val = *ptr;

     cout << "val = " << val << endl;
     cout << "ptr - arr = " << ptr - arr << "\n"; // we can subtract => 2
     val = *ptr++;                                // use pointer value in val, then increment pointer address
     cout << "val(*ptr++) = " << val << " "
          << "ptr - arr = " << ptr - arr << " \n"; // 30 3

     cout << "ptr = " << *ptr << endl;

     // ?  ++ precedence > *

     cout << "=======================================================" << endl;
     ptr = arr + 2;
     val = *++ptr;
     cout << "val (*++ptr)= " << val << " "
          << "ptr - arr = " << ptr - arr << " \n";

     cout << "=======================================================" << endl;
     ptr = arr + 2;
     val = *ptr--;
     cout << "val(*ptr--) = " << val << " "
          << "ptr - arr = " << ptr - arr << " \n";

     cout << "=======================================================" << endl;
     ptr = arr + 2;
     val = *--ptr;
     cout << "val(*--ptr) = " << val << " "
          << "ptr - arr = " << ptr - arr << " \n";

     cout << "=======================================================" << endl;
     ptr = arr + 2;
     val = (*ptr)++; // this increase the value in array
     cout << "val(*ptr)++= " << val << " "
          << " ptr - arr = " << ptr - arr << " arr[2] = " << arr[2] << " \n";

     cout << "=======================================================" << endl;
     // const
     int val1 = 20;

     int *ptr1 = new int;
     // we can change the data and the address
     *ptr1 = 10;
     ptr1 = &val1;

     cout << "=======================================================" << endl;

     const int *ptr2 = new int;
     // we can change  the address only because const before int
     // *ptr2 = 10;  // compiler error
     ptr2 = &val1;

     cout << "=======================================================" << endl;

     int *const ptr3 = new int;
     // we can change  the data only because const before pointer
     *ptr3 = 10;
     // ptr3 = &val1; // compiler error
     cout << "=======================================================" << endl;

     const int *const ptr4 = new int;
     // we can't change  both
     // *ptr4 = 10; // compiler error
     // ptr4 = &val1; // compiler error

     cout << "=======================================================" << endl;
     // we can use string like this
     const char *str = "hello";
     char str2[] = "str with array";
     cout << "const char *str = " << str << endl;
     cout << "str2[] " << str2 << endl;
}