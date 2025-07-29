#include<iostream>
using namespace std;

class Complex{
    public:
    int r , i;

    Complex(int r=0, int i=0) {
        this->r = r;
        this->i = i;
    }

    Complex operator+(Complex& obj) {
        Complex temp;
        temp.r= this->r + obj.r;
        temp.i= this->i + obj.i;
        return temp;
    }
};


int main() {

    Complex num1(3, 4);
    Complex num2(1, 2);
    Complex num3 = num1 + num2;

    cout<<num3.r<<endl;
    cout<<num3.i<<endl;
    


    return 0;
}