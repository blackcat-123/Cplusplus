#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void merge(int[], int, int, int);
void mergeSort(int[], int, int);
void print(int[], int);

void print(int arr[], int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1; // số phần tử của mảng bên trái L
    int n2 = r - m;  // số phần tử của mảng bên phải R
    int L[n1], R[n2]; // tạo ra 2 mảng phụ 
    for(int i = 0; i < n1; i++) { // copy giá trị vào mảng phụ
        L[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++) {
        R[j] = arr[m + j + 1]; // copy dữ liệu vào mảng phụ
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if(L[i] < R[j]) { // dồn phần tử nhỏ hơn sang trái
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // copy những phần tử còn lại của mảng phụ
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r) {
    int m;
    if(l < r) {
        m = (l + r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m , r);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    srand(time(0));
    for(int i = 0 ; i < n ; i++) {
        arr[i] = 1 + (rand()% 100);
    }
    
    print(arr, n);
    cout << "\n";
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}