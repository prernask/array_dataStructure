// Search an element in sorted and rotated
// array using single pass of Binary Search
#include<iostream>
using namespace std;
int search(int arr[],int l, int h, int key){
    if(l>h)
    return -1;

    int mid=(l+h)/2;
    if(arr[mid]==key)
    return mid;

    //if arr[1...mid] is sorted 
    if(arr[l] <= arr[mid]){
        // as the subarray is sorted we can quickly checki
        //if key is lies in half or other half
        if(key>=arr[l] && key<=arr[mid])
        return search(arr, l, mid-1, key);

        //if key not lies in first half subarray
        //divide other half into two subarray such that we can quickly check if key lies in other half

        return search(arr, mid+1, h, key );
    }
    //if arr[l...mid] first subarray is not sorted then arr[mid...h] must be sorted subarray
    if(key>= arr[mid] && key<=arr[h])
        return search(arr, mid+1, h, key);

    return search(arr, l, mid-1,key);

}
int main(){
    int arr[]={4,5,6,7,8,9,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=3;

    int i = search(arr, 0, n-1,key);
    if(i!=-1)
    cout<<"index:"<<i<<endl;
    else
    cout<<"key not found!!";

}