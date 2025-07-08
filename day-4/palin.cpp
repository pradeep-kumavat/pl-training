#include<iostream>
using namespace std;


int reverse(int n){
    int ans= 0;

    while(n!=0){
        int digit = n % 10;
        ans = (ans *10) + digit;
        n = n / 10;
    }

    return ans;
}

int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    int reversedValue = reverse(num);

    if(reversedValue == num){
        cout<<"It is a Palindrome number"<<endl;
    }
    else{
        cout<<"It is not a Palindrome Number"<<endl;
    }
    
}