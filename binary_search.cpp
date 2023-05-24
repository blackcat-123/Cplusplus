// Tìm phần tử bên trái nhất bằng x, in ra chỉ số của nó

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int x) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = (l + r)/2;
        
        if(arr[m] < x) { // Nếu x nằm bên phải arr[m]
            l = m + 1;
        }
        else {              // Nếu x nằm bên trái ar[m]
            r = m - 1; 
        }

    }
    if(arr[l] == x) {
        return l;
    }
    return -1;
}
int main() {
    int n, x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << binarySearch(arr, n, x);
    return 0;
}