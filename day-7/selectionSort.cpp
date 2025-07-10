#include<iostream>
using namespace std;

 void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void selection(int arr[], int n){
  int min , temp;
  cout<<"after sorting"<<endl;
  for (int i = 0; i < n-1; i++) { // no. of passes
    min=i;
    for (int j = i+1; j < n; j++) // till no. of comparision
    {
        if (arr[j] < arr[min]) // (<) is used for ascending order  (>) is used for ascending order
        {
            min=j;
        }       
    }
    //swap a[i] and a[min]
    temp= arr[i];
    arr[i]=arr[min];
    arr[min]=temp; 
  }
}

int main(){
  int arr[]={44,3,60,78,12,9};
  int n = 6;
  print(arr,n);
  selection(arr,n);
  print(arr,n);

    return 0;
}