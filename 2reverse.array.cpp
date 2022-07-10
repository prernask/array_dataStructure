//reverse the elements of array ar string 

#include<iostream>
using namespace std;

// function to reverse the array from start to end
void reverseArray(int arr[], int start , int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}
//function to print array
void printArray(int arr[], int size){
    for(int i=0;i<size; i++)
    cout<<arr[i]<<" "<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    //to print original array
    printArray(arr, n);

    //calling function
    reverseArray(arr,0, n-1);

    cout<<"reversed array is:";

    //to print the reversed array
    printArray(arr,n );

    return 0;
}