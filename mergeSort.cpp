#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    i = l;  // l <= i <= m
    k = l;
    j = m + 1;  // m+1 <= j <= r
    int temp[100];
    while (i <= m && j <= r) { 
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    } 
    while (i <= m) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int i = l; i < k; i++) {
        arr[i] = temp[i];
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

void print(int arr[], int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    
    print(arr, n);
    cout << "\n";
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}