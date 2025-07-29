#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    void setRollNo(int r) {
        rollNo = r;
    }
};

class Test: public Student {
    public:
    int marks;
    void setmarks(int one, int two, int three, int four, int five){
        marks = one + two + three + four + five;
    }
};

class Results: public Test{
    public:
    void display() {
        cout<<"Roll number: "<<rollNo<<endl;
        cout<<"total Marks are "<<marks<<endl;
        cout<<"average marks are : "<<marks/5<<endl;
    }
};


int main() {
    Results r;
    r.setRollNo(679);
    r.setmarks(91, 85, 78, 88, 92);
    r.display();
    return 0;
}