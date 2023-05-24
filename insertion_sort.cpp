#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    int key;
    for(int i = 1; i < n; i++) {
        key = a[i];
        int j = i - 1;
        while (j>=0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main() {
    int arr[] = {5,7,4,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}