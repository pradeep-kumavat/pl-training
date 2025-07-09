#include<iostream>
using namespace std;


int add(int a , int b){
    return a+b;
}

void greet(){
    cout<<"Good morning !!!"<<endl;
}

void sayGreet(void (*greet)()){
    cout<<"inside sayGreet"<<endl;
}

int main(){

    int (*ptr)(int ,int);   //declaration of function pointer with arguments

    ptr = add;
    int sum = ptr(4,3);    //calling the function with arguments

    cout<<sum<<endl;

    void (*pp)();        //declaration of function pointer without arguments

    pp = greet;
    pp();                // calling the function using function pointer
    

    sayGreet(greet);


    return 0;

}