#include<iostream>
using namespace std;
int main(){
    int *p;
    p = new int; //cap pat bo nho cho con tro p
    *p = 100; // gan gia tri 100 cho o nho con tro p tro toi
    cout << "Dia chi cua con tro p: "<< p << endl;
    cout << "Gia tri tai dia chi con tro p tro toi: " << *p ;
    delete p; // thu hoi bo nho
    return 0;
}