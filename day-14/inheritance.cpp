#include <iostream>
using namespace std;

class A{
public:
    void display() {
        cout << "Class A" << endl;
    }   
};

class B : public A {
public:
    void display() {
        cout << "Class B" << endl;
    }
};
    
class C : public A {
public:
    void display() {
        cout << "Class C" << endl;
    }
};

class D : public B {
public:
    void display() {
        cout << "Class D" << endl;
    }
};
class E : public B {
public:
    void display() {
        cout << "Class E" << endl;
    }
};
class F : public C {
public:
    void display() {
        cout << "Class F" << endl;
    }
};

int main() {
    F obj;

    obj.display();

    return 0;
}