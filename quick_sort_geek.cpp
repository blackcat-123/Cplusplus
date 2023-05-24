#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

int partition(int arr[], int low, int high) {
    int i = low - 1; // chi so cua phan tu be hon pivot, don ve ben trai
    int pivot = arr[high];
    for (int j = low; j < high - 1; j++) { // j chi so cua mang
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        partition(arr, low, pi - 1);
        partition(arr, pi + 1, high);
    }
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int a[] = {6, 7, 9, 8, 10};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a , 0, n - 1);
    display(a, n );
    return 0;
}