#include<iostream>
using namespace std;
#pragma pack(1)

struct product{
    char name[5];
    int price;
};

void filter(struct product m1[]){
    cout<<"Products are: "<<endl;
    for(int i = 0; i < 5; i++){
        if(m1[i].price > 15000){
            cout<<"The name of the product is "<<m1[i].name<<endl;
            cout<<"The price of the product is "<<m1[i].price<<endl;
            cout<<endl;
        }
    }
}


int main(){

    struct product m1[5];

    for(int i =0;i<5;i++){
        cout<<"Enter the name of product:";
        cin>>m1[i].name;
        cout<<"Enter the price: ";
        cin>>m1[i].price;
        cout<<endl;
    }


    filter(m1);

    return 0;
}