//find minimum in rotated and sorted array
#include<iostream>
using namespace std;
int findMin(int arr[], int low, int high){
    //this condition is needed to handle the case when array is not rotated at all
    if(high<low)
    return arr[0];
    //if there is only one element left
    if(high==low)
    return arr[low];

    //find mid
    int mid = (low+high)/2;
    
    //check if ele (mid+1) is minimum element 
    if(mid<high && arr[mid+1]<arr[mid])
    return arr[mid+1];

    //check if mid itself is minimume element 
    if(mid>low && arr[mid-1]>arr[mid])
    return arr[mid];

    //decide whethere we need to go left or high
    if(arr[high] >arr[mid])
    return findMin(arr,low,mid-1);
    return findMin(arr, mid+1, high);


};
int main(){

    int arr1[] ={4,6,1,9,2,0};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"the minimum element is:"<<findMin(arr1, 0, n1-1)<<endl;

    int arr2[]={1,9,2,4,5,3,7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"the minimum element is:"<<findMin(arr2, 0, n2-1)<<endl;

    return 0;
    
}