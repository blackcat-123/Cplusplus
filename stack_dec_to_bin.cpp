#include<iostream>
using namespace std;
int const max = 100;
int a[100];
int top = -1;
void push(int value){
    top ++;
    a[top] = value;
}
void display(){
    for (int i=top; i >= 0; i--) {
        cout << a[i] ;
    }
}
int main() {
    int n;
    cin >> n;
    while (n > 0) {
        
        push(n%2);
        n = n/2;
    }
    display();
    return 0;
}