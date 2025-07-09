#include<iostream>
using namespace std;

void print(int *ptr){
    for(int i=0;i<5;i++){
        cout<<*(ptr + i);
    }
}

int main(){

    int arr[5]= {1,2,3,4,5};

    print(arr);


    return 0;
}