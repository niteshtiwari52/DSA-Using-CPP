// Problem : WAP to print the average of the array
#include <iostream>
using namespace std;
void arrayInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
double arrayAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / double(n);
}
int main()
{
    int arr[10];
    int size;
    cin >> size;
    arrayInput(arr, size);
    cout << arrayAverage(arr, size);
    return 0;
}