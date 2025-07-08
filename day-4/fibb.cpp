#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value: ";
    cin>>n;

    int x = -1;
    int y = 1;
    int z;
    for(int i=1;i<=n;i++){
        z = x+y;
        cout<<z<<endl;
        x = y;
        y = z;

    }




    return 0;

}