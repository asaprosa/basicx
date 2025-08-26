#include <iostream>
using namespace std;

class A {
    int x;
public:
    A() { x = 10; }
    friend void show(A obj);
};

void show(A obj) {
    cout << "Value of x: " << obj.x << endl;
}

int main() {
    A obj;
    show(obj);
    return 0;
}