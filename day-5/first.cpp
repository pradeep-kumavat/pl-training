#include<iostream>
using namespace std;

int oper(int a , int b, char ch){
    if(ch == '+') return a+b;
    else if(ch == '-') return a-b;
    else return 0;
}

int main(){
    int a,b;
    cout<<"Enter the num: ";
    cin>>a>>b;

    int res = oper(a,b,'+');
    cout<<res;

    return 0;
}