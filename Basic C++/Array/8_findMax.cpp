// Problem : WAP to print the max element of the array
#include <iostream>
using namespace std;
void arrayInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int findMax(int arr[], int n)
{
    int ans = 0 ; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > ans){
            ans = arr[i] ; 
        }

    }
    return ans; 
}
int main()
{
    int arr[10];
    int size;
    cin >> size;
    arrayInput(arr, size);
    cout << findMax(arr, size);
    return 0;
}