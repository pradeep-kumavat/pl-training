#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    for(int i = 1;i<=num;i++){
            if(i %2 == 0){
                for(int j = i;j>0;j--){
                    cout<<j;
                }
                cout<<endl;
            }
            else{
                for(int j = 1;j<=i;j++){
                    cout<<j;
                }
                cout<<endl;
            }
    }



    return 0;
}