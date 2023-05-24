#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}
void selectionSort(int arr[], int n) {
    int min_id;
    for(int i = 0; i < n - 1; i++) {
        
        min_id = i;
        for(int j = i+1; j < n; j++) {
            if(arr[min_id] > arr[j]) {
                swap(arr[j], arr[min_id]);
            }
        }
    }
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[] = {7,6,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    display(arr, n);
    return 0;
}