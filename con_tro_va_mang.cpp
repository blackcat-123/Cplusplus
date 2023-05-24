#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int *p = a; // gan mang a cho con tro p
    for(int i=0;i<6;i++){
        cout << p[i] << " ";
    }
    cout << '\n';
    for(int i=0;i<6;i++){
        cout << *(p+i) << " ";
    }
    return 0;
}