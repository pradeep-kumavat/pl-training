#include<iostream>
using namespace std;

int main(){
    int amount = 0;
    int unit;
    cout<<"Enter the unit: ";
    cin>>unit;

    if(unit<=50){
        amount = unit * 0.50;
        cout<<"The amount is "<<amount<<endl;
    }
    else if(unit<=150){
        amount = (50 * 0.50) + ((unit - 50) * 0.75);
        cout<<"The amount is "<<amount<<endl;
    }
    else if(unit<=250){
        amount = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
        cout<<"The amount is "<<amount<<endl;
    }
    else{
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
        cout<<"The amount is "<<amount<<endl;
    }

    int additionalCharges = amount + (0.2 * amount);
    
    cout<<"The total amount is "<<additionalCharges<<endl;


    return 0;
}