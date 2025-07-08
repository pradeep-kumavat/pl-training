#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int position;
    cout << "Enter the position of the bit :";
    cin >> position;
    int bit = (num >> position-1) & 1;
    if(bit == 1){ 
        cout << "The bit is set (1)" << endl;
    } else {
        cout << "The bit is not set (0)" << endl;
    }

    return 0;

    
} 