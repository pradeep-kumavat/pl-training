#include<iostream>
using namespace std;
//wap to check a character is vowel or net
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout<<"The character is a vowel"<<endl;
    }else{
        cout<<"The character is not a vowel"<<endl;
    }
    

    return 0;

    
}