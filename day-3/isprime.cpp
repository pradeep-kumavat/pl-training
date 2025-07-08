#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int cnt=0;

    for(int i =1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
        if(cnt>2){
            break;
        }
    }

    if(cnt==2) cout<<"prime"<<endl;
    else cout<<"not prime"<<endl;





    return 0;
}