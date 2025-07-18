#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    Number operator-() {
        return Number(-value);
    }

    Number operator++() {
        return Number(++value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(10);

    cout << "Original: ";
    num.display();

    Number neg = -num;  // Unary minus
    cout << "After unary minus: ";
    neg.display();

    ++num;  // Prefix increment
    cout << "After prefix increment: ";
    num.display();

    return 0;
}
