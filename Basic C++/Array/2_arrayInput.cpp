// Problem :  Input to the array
#include <iostream>
using namespace std;
void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void display(int *arr, int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void halfarry(int arr[],int size)
{
    for(int i=0;i<size;i++){
        arr[i]=arr[i]/2;
    }

    // arr[0] = 20 ; 
    // arr[1] = arr[1] / 2 ; 
    // arr[2] = arr[2]/ 3;

}

int main()
{
    int arr[20];
    int size;
    cin >> size;
    // input to the araay
    arrayInput(arr, size);
    // display
    halfarry(arr,size);
    display(arr, size);
    return 0;
}