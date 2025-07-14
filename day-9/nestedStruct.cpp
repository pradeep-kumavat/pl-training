#include <iostream>
using namespace std;
#pragma pack (1)

struct address{
    char city[50];
    int pincode;
};

struct employee {
    char name[50];
    int id;
    struct address add;
};

void filter(struct employee emp[]){
    cout<<"Employees: "<<endl;
    for(int i=0; i<3;i++){
        if(emp[i].add.pincode == 452005){
            cout << "Name: "<<emp[i].name<<endl;
            cout << "ID: "<<emp[i].id<<endl;
            cout << "City: "<<emp[i].add.city<<endl;
            cout << "Pincode: "<<emp[i].add.pincode<<endl;
            cout << endl;
        }
    }
}

int main(){
    struct employee emp[3];
    for(int i = 0; i < 3; i++){
        cout<<"Enter the name of employee: ";
        cin>>emp[i].name;
        cout<<"Enter the id of employee: ";
        cin>>emp[i].id;
        cout<<"Enter the city: ";
        cin>>emp[i].add.city;
        cout<<"Enter the pincode: ";
        cin>>emp[i].add.pincode;
        cout<<endl;
    }

    filter(emp);



    return 0;
}



