#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    num % 2 == 0 ? cout << "Even" : cout << "Odd";

    return 0;
}