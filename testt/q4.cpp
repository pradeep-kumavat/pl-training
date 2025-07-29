#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"classsss A"<<endl;
    }
};
class B: public virtual A{
    public:
};
class C:public virtual A{
    public:
};

class D: public B, public C{
    public:
};

int main(){
    D obj;
    obj.func();

    return 0;
}