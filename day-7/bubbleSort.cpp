#include<iostream>
using namespace std;

 void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble(int arr[], int n){
  int temp;
  cout<<"after sorting"<<endl;
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n-1; j++) 
    {
        if (arr[j] > arr[j+1]) 
        {
            temp= arr[j];
            arr[j]=arr[j + 1];
            arr[j + 1]=temp;  
        }       
    }
    
  }
}

int main(){
  int arr[]={44,3,60,78,12,9};
  int n = 6;
  print(arr,n);
  bubble(arr,n);
  print(arr,n);

    return 0;
}