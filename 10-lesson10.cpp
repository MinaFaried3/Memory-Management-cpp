#include <iostream>
using namespace std;
int global = 20;

int *solve_wrong()
{
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;
    // do some staff
    // can't return arr...it will be freed in stack
    return ptr;
}

int *solve_right()
{
    int *ptr = new int[4];

    // do some staff

    return ptr; // caller responsible to free
}

int main()
{
    /**
     * @brief
     * global and static local variables saved in date segment on memory
     * stack memory is managed by cpu
     * stack memory is managed by your self
     * stack is faster than heap
     * stack is smaller than heap
     * 
     */
    static int static_local = 20;
    string f;

    // --------------------------------------------------

    //* int *arr = solve_wrong(); //this wrong because the array here is local variable that will be freed in stack
    int *arr = solve_right(); // this right because the array here is in heap memory
}