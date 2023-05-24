#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int temp;
    for(int i=1;i<=min(m,n);i++){
        if(min(m,n)%i==0){
            temp = i;
        }
    }
    return 0;
}