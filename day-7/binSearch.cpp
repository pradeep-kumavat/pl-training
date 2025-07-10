#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0, high = size -1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid]== target) return mid;
        else if(arr[mid]<target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int binarySearchRecursive(int arr[], int size, int target ,int low , int high){
    int mid = low + (high - low)/2;
    if(low>high) return -1;

    if(arr[mid]== target) return mid;
    else if(arr[mid]<target) return binarySearchRecursive(arr, size, target, mid + 1,high);
    else binarySearchRecursive(arr, size, target, low,mid -1);
}

int main(){

    int arr[10]= {10,20,30,40,50,60,70,80,90,100};
    int size = 10;

    int target = 50;

    int index = binarySearch(arr, size, target);
    cout<<"the index is "<<index<<endl;

    int low = 0, high = size- 1;
    int mid = low + (high - low)/2;

    index = binarySearchRecursive(arr, size, target, low, high);

    cout<<"the index is "<<index<<endl;
    


    return 0;
}