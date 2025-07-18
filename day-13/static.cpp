//create a static member of the class that count the number of objects created of that class
#include<iostream>
using namespace std;
class StaticCounter {
public:
static int count;
    StaticCounter() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

int StaticCounter::count = 0;

int main() {
    StaticCounter obj1;
    StaticCounter obj2;
    cout << "Number of objects created: " << StaticCounter::getCount() << endl;
    return 0;
}