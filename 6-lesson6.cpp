#include <iostream>
using namespace std;
int main()
{
    // store data in heap
    // in cpp
    int *ptr = new int(5);
    delete ptr;    // we must delete all data stored in heap to avoid memory leak
    ptr = nullptr; // to ensure that is deleted
    ptr = new int(6);
    cout << "value of ptr : " << *ptr << endl;
    delete ptr;

    // in c
    // int *ptr = (int *)malloc(7);
    // free(ptr);
    // -------------------------------------------------------------------------
    cout << "-dynamic array------------------------------------------------------------------" << endl;
    // dynamic array
    int size = 2;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    delete[] arr;
    arr = nullptr;
    // -------------------------------------------------------------------------
    cout << "2D dynamic array------------------------------------------------------------------" << endl;
    // 2D dynamic array
    int rows = 2, cols = 2;
    int **arr1 = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr1[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        delete[] arr1[i];

    delete[] arr1;
}