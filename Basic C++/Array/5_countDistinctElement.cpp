//Problem :  WAP To count the disticnt element in the array
#include<iostream>
using namespace std;
void inputArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    
}
int countDistinctElements(int arr[] , int size){

    int count = 0 ; 
    bool isDistinct = true;

    for(int i = 0 ; i<size ; i++){
        isDistinct = true ; 
        
        for(int j = i-1 ; j >= 0 ; j--){
            if(arr[i] == arr[j]){
                isDistinct = false ;
                break;
            
            }
        }

        if(isDistinct == true){
            count++;
        }

    }
    return count;
    
}
int main()
{
    int arr[100];
    int size ; 
    cin>>size;
    inputArray(arr , size);
    cout<<countDistinctElements(arr, size);
    return 0;

}