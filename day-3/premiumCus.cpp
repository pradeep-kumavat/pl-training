#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"enter the amount: ";
    cin>>amount;

    int isPremium;
    cout<<"is the customer premium? (1 for yes, 0 for no): ";
    cin>>isPremium;
    int discount = 0;
    if(isPremium == 1){
        if(amount >= 10000){
            discount = 15;
            amount = amount - (amount * discount / 100);
            cout<<"The amount is "<<amount<<endl;
        } else {
            discount = 12; 
            amount = amount - (amount * discount / 100);
            cout<<"The amount is "<<amount<<endl;
        }
    }
    else{
        if(amount >=10000){
            discount = 8;
            amount = amount - (amount * discount / 100);
        } else {
            cout<<"No discount available"<<endl;
        }
    }
}