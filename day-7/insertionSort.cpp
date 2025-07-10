#include<iostream>
using namespace std;

 void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void insertion(int arr[], int n){
    int ele, j;
    cout<<"After sorting:"<<endl;

    for(int i = 1;i<=n-1;i++){
        ele = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>ele){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = ele;
    }
  }

int main(){
  int arr[]={44,3,60,78,12,9};
  int n = 6;
  print(arr,n);
  insertion(arr,n);
  print(arr,n);

    return 0;
}