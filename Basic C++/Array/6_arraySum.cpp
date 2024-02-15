// Problem :
#include <iostream>
using namespace std;
void arrayInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10];
    int size;
    cin >> size;
    arrayInput(arr, size);
    cout << arraySum(arr, size);

        return 0;
}