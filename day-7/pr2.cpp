#include<iostream>
using namespace std;
#include<unordered_map>

int main(){
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int size = 10;
    int n;
    cout<<"enter ";
    cin>>n;
    while(n > 0){
        int digit = n % 10;
        arr[digit]++;
        n = n/10;
    }
    int min = 0;

    for(int i = 0;i<size;i++){
        if(min < arr[i]) min = arr[i] +1;
        
    }

    cout<<min<<endl;
    




    return 0;
}