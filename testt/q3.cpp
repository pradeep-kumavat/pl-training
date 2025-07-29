#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area() = 0;

};

class Rectangle: public Shape{
    public:
    int l = 3;
    int b = 4;
    void area(){
        cout<<"area of rectangle: "<<l*b<<endl;
    }
};

class Circle: public Shape{
    public:
    int rad = 2;
    void area(){
        cout<<"area of circle: "<<3.14*rad*rad<<endl;
    }
};


int main(){
    Rectangle r;
    Circle c;
    r.area();
    c.area();

    return 0;
}