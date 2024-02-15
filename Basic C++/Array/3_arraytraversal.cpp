// Problem :
#include <iostream>
using namespace std;
void arrayTraversalUsingNormalForLoop(int arr[], int n)
{
    // using normal Loop
    cout << "Using For Loop: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void arrayTraversalUsingForEachLoop(int *arr, int n)
{

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr + i << " ";
        cout << *(arr + i);
        cout << endl;
    }
}
int main()
{
    // array traverasal
    int arr[5];
    int n = sizeof(arr) / sizeof(int);

    arrayTraversalUsingNormalForLoop(arr, n);
    arrayTraversalUsingForEachLoop(arr, n);
    // cout << arr;

    return 0;
}