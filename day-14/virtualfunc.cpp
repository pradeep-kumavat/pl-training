#include <iostream>
using namespace std;
class A {
public:
    virtual void show() { 
        cout << "Class A" << endl;
    }  
};
class B : public A {
public:
    void show(){
        cout << "Class B" << endl;
    }
};
int main() {
    B obj;
    A *ptr = &obj; // Pointer of type A pointing to an object of type B
    ptr->show(); // Calls B's show() due to virtual function mechanism

    return 0;
}