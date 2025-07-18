#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r=0, float i=0){
            real = r;
            imag = i;
        }
        Complex operator + (Complex& obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }
        void display() {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    c1.display();
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}