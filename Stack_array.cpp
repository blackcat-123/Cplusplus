#include <iostream>
using namespace std;
#define max 10
int stack[max];
int top = -1;

void push(int value) {
    if(top >= max - 1){
        cout << "Stack is full";
    }
    else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top <= -1) {
        cout << "Stack is empty";
    }
    else {
        top--;
    }
}

void display() {
    if(top >= 0) {
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
    }
    else {
        cout << "Stack is empty";
    }
}

int main() {
    push(-1);
    push(2);
    push(3);
    pop();
    display();
}