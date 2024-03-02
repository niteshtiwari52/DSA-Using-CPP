// Problem :  References in C++
#include <iostream>
using namespace std;
void referenceIntro(int x)
{
    int &y = x;
    // before arithmatic opration
    cout << "x = " << x;
    cout << " y= " << y;
    cout << endl;

    // Arithmatic operation
    x = x + 3;
    // before arithmatic opration
    cout << "x = " << x;
    cout << " y= " << y;
    cout << endl;

    y = y + 2;

    // after arithmatic opration
    cout << "x = " << x;
    cout << " y= " << y;
    cout << endl;
}
void updateArray(int *arr, int n)
{
    // bhaiya mujhe yaha pe issue aa raha mai isme array ko for-each loop se update karna chata hu but for each use karne pe problem aa rahi hai

    // Error :  this range-based 'for' statement requires a suitable "begin" function and none was found
    // for (int x : arr)
    // {
    //     x = x * 2;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[i] * 2;
    // }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int x = 20;
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);
    // referenceIntro(x);
    displayArray(arr, n);
    updateArray(arr, n);
    displayArray(arr, n);

    return 0;
}