#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int cnt = 0;

    for(int i =0;i<32;i++){
        num = num>>1;
        if(num & 1) cnt++;
    }

    cout<<"the set bit is "<<cnt<<endl;





    return 0;
}