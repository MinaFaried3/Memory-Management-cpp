#include <iostream>
using namespace std;
int main()
{
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
          ? **arr = arr[0][0] = *arr[0] = *(*arr+0)

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

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "arr = *arr = arr[0]  = &arr[0] = &arr[0][0] : " << arr << " : " << *arr << " : " << arr[0] << " : " << &arr[0] << " : " << &arr[0][0] << endl;
    cout << "arr+1 = arr[1] = &arr[1] = &arr[1][0] = *(arr+1) :  " << arr + 1 << " : " << arr[1] << " : " << &arr[1] << " : " << &arr[1][0] << " : " << *(arr + 1) << endl;
    cout << "**arr = arr[0][0] = *arr[0]:  " << **arr << " : " << arr[0][0] << " : " << *arr[0] << endl;
    cout << " *(*arr+1) = arr[0][1]  :  " << arr[0][1] << " : " << *(*arr + 1) << " : " << endl;
    cout << " **(arr+1) = arr[1][0] = *arr[1]" << **(arr + 1) << " : " << arr[1][0] << " : " << *arr[1] << endl;
    cout << " *(arr + 1) + 2 = &arr[1][2] :  " << *(arr + 1) + 2 << " : " << &arr[1][2] << " : " << endl;
    // --------------------------------------------------
    cout << "------------------------------------------------------------------------------" << endl;

    // notice that two arrays are stored side by side in memory
    cout << **arr << " " << *(*arr + 1) << " " << *(*arr + 2) << " " << *(*arr + 3) << " " << *(*arr + 4) << " " << *(*arr + 5) << endl;
    cout << **(arr + 1) << " " << *(*(arr + 1) + 1) << " " << *(*(arr + 1) + 2) << endl;
}