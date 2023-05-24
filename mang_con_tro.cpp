#include<iostream>
using namespace std;
int main(){
    int *p[8];
    for (int i=0;i<8;i++){
        p[i] = new int;
        *p[i] = i;
        
    }
    for (int i=0;i<8;i++){
        cout << p[i] << " " << *p[i] << endl;
    }
    return 0;
}