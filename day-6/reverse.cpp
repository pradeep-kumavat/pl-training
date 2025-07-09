#include<iostream>
using namespace std;

int reverse(int num, int ans){

    if(num==0) return ans;

    int digit = num %10;
    reverse(num/10, ans*10+digit);

}

int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    int ans = 0;

    int reversedNumber = reverse(num,ans);
    cout<<reversedNumber<<endl;



    return 0;
}