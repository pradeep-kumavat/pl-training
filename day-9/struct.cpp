#include<iostream>
using namespace std;
#pragma pack(1)

struct student {
    int age;
    int roll;
    char enroll;
    int print(student obj){
        cout<<obj.age<<endl;
        cout<<obj.roll<<endl;
        cout<<obj.enroll<<endl;
    }
};

int main(){

    struct student s1 = {21,79,'p'};
    s1.print(s1);
    cout<<"the size of student is "<<sizeof(student);

    struct student s2;
    cout<<"Enter the age: ";
    cin>>s2.age;

    cout<<"Enter the roll: ";
    cin>>s2.roll;

    cout<<"Enter the enroll: ";
    cin>>s2.enroll;
    s2.print(s2);
    





    return 0;
}