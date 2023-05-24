#include <iostream>
using namespace std;
#define MAX_OF_STACK 10;
int stack[10];
int top = -1;
// Khai bao mang,bien ngoai ham main
void push(int value);
void display() {
    if(top >= 0){
        for (int i=top; i>=0; i--){
            cout << "Stack element: " << stack[i] ;
            cout << endl;
        }
    }
}
int main() {
    
    int n;
    cin >> n;
    while(n--){
        int value;
        cin >> value;
        push(value);
    }
    display();
}
void push (int value) {
    if (top < 10 ) {
        top++;
        stack[top] = value;
    }
    else {
        cout << "Stack da day";
        exit(0);
    }
}

