#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int cnt = 0;

    for(int n = 1;n<=100;n++){

        for(int i = 1;i<=n;i++){
            if(n%i==0) cnt++;
            if(cnt ==2)  cout<<n<<" ";
            
        }

    }
    

    return 0;
}