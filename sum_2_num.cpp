#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int arr[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    // sort
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum = arr[0] + arr[4];
    
    return 0;
}