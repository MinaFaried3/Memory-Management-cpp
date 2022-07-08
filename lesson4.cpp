#include <iostream>
using namespace std;
int main()
{
    int x[3] = {5, 6, 8};

    cout << "address of array x is : " << x << endl;
    cout << "value of first num array x is : " << *x << endl;
    cout << "value of last num in  array x is : " << *(x + 2) << " : " << x[2] << endl;
    cout << "address of last num in  array x is : " << (x + 2) << " : " << &x[2] << endl;

    // notice this
    // x is pointer to array not to int
    // x return the address of first element in array
    int *ptr = x; // this is true condition because x return the address of first element in array

    int *vtr;
    // x = vtr; // this is false condition because x is pointer to array not to int

    // ------------------------------------------------------------------------------------------------------------
    cout << "-------------------------------------------------------------------------------" << endl;

    // 2D array is 1D array of pointers
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "address of array arr is : " << arr << endl;
    cout << "value of first  array arr is : " << *arr << endl;
    cout << "value of last array in  array arr is : " << *(arr + 1) << " : " << arr[1] << endl;
    cout << "address of last array in  array arr is : " << (arr + 1) << " : " << &arr[1] << endl;

    // notice there is pointer of char , int , double , and there is pointer to array
    // arr return pointer to 1d array of 3 elements

    // int *ptr1 = arr; // this is false condition because arr return pointer to 1d array of 3 elements not pointer to int

    int(*ptr1)[3] = arr; // this is true condition
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "address of array ptr1 is : " << ptr1 << endl;
    cout << "value of first array array ptr1 is : " << *ptr1 << endl;
    cout << "value of last array in  array ptr1 is : " << *(ptr1 + 1) << " : " << ptr1[1] << endl;
    cout << "address of last array in  array ptr1 is : " << (ptr1 + 1) << " : " << &ptr1[1] << " : " << &ptr1[1][0] << endl;
    //    dereference
    cout << "value of first num in first array **ptr1 is : " << **ptr1 << endl;
    cout << "value of first num in second array **ptr1+1 is : " << **(ptr1 + 1) << " : " << *ptr1[1] << endl;
    cout << "value of second num in  first array ptr1 is : " << *(*ptr1 + 1) << " : " << ptr1[0][1] << endl;
    cout << "address of last num in  second array ptr1 is : " << *(ptr1 + 1) + 2 << " : " << &ptr1[1][2] << endl;

    /*
        TODO : int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

        * - arr in last example:
            - is the pointer to the 2d array = arr
            - is pointer to first node(array) in 2d array = *arr = arr[0] = &arr[0]
            - is address to first element in first array = &arr[0][0]
            ? arr = *arr = arr[0]  = &arr[0] = &arr[0][0]

       * - arr+1 in last example:
            - is pointer to second node(array) in 2d array = arr+1 = arr[1] = &ptr1[1]
            - is address to first element in first array = &arr[1][0]= *(arr+1)
            ? arr+1 = arr[1] = &arr[1] = &arr[1][0] = *(arr+1)

        * - (**arr) in last example:
            - is the value of the first element in first array = **arr = arr[0][0]
            ? **arr = arr[0][0] = *arr[0]

        * - *(*arr+1) in last example:
            - is the value of the second element in first array = *(*arr+1) = arr[0][1]
            ? *(*arr+1) = arr[0][1]


        * - **(arr+1) in last example:
            - is the value of the first element in second array = **(arr+1) = arr[1][0]
            ? **(arr+1) = arr[1][0] = *arr[1]


        * - *(arr+1)+2 in last example:
            -  is address of last element in  second array = *(arr + 1) + 2 = &arr[1][2]
            ? *(arr + 1) + 2 = &arr[1][2]




        ! notice that:
            - when increase arr + 1 this jump to second node(array) in the 2d array
            - when increase *arr + 1 this jump to second element in the 1d array



    */
}