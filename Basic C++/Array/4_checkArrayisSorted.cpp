// Problem :  WAP to check that the array is sorted or not
#include <iostream>
using namespace std;
string checkArraySorted(int arr[], int n)
{
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag = false;
            break;
        }
    }
    return flag ? "Yes " : "NO";
}
int main()
{
    int arr[] = {1, 5, 7, 14, 43};
    int n = sizeof(arr) / sizeof(int);

    cout << checkArraySorted(arr, n);
    return 0;
}