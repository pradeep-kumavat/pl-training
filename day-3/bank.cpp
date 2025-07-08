#include<iostream>
using namespace std;

int main(){
    int amount = 1000;
    int d;
    int w;
    
    char choice;
    cout<<"enter operation : w for withdraw OR d for Deposit: ";
    cin>>choice;

    switch(choice){
        case 'd':
            cout<<"Enter the deposit value: ";
            cin>>d;
            amount += d;
            cout<<"the amount is "<<amount<<endl;
            break;

        case 'w':
            cout<<"Enter the withdraw value: ";
            cin>>w;
            if(w>amount) cout<<"Insufficient Balance"<<endl; 
            else amount -= w;
            cout<<"the amount is: "<<amount;
            break;

        default:
            cout<<"Invalid Operation"<<endl;
    }
    
}