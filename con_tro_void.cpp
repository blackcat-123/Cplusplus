#include<iostream>
using namespace std;
int main(){
    int a = 5;
    float f = 5.5;
    void *p;
    p = &a;
    *(int*)p = 10; // ep kieu con tro void thanh int
    cout << a << endl;
    p = &f;
    *(float*)p = 20.5;
    cout << f;
}