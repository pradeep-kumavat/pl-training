#include<iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[]){

    int max = INT_MIN;
    for(int i = 0;i<5;i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int main(){
    int arr[10] = {23,34,45,56,67,65,54,43,32,11};

    int maxele = linearSearch(arr);

    cout<<"the maximum element is : "<<maxele<<endl;
    


    return 0;
}