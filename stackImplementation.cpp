#include <iostream>
using namespace std;
#define SIZE 10

class stack {
    char stk[SIZE];
    int tos;

    public:
    void init();
    void push(char ch);
    char pop();

};

void stack::init() {
    tos = 0;
}

void stack::push(char ch) {
    if(tos == SIZE) {
        cout << "The stack is full!" << endl;
        return;
    }
    stk[tos] = ch;
    tos++;
}

char stack::pop() {
    if(tos == 0) {
        cout << "Stack is empty!" << endl;
        return 0;
    }
    tos--;
    return stk[tos];
    
}

int main() {
    stack ob1, ob2;
    ob1.init();
    ob2.init();

    ob1.push('a');
    ob1.push('b');
    ob1.push('c');
    
    ob2.push('x');
    ob2.push('y');
    ob2.push('z');
    
    for(int i = 0; i < 3; i++) {
        cout << "Pop s1: " << ob1.pop() << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Pop s2: " << ob2.pop() << endl;
    }

    return 0;
}