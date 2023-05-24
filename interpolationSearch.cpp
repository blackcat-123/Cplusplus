#include <iostream>
using namespace std;
int interpolationSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low < high && x >= arr[low] && x <= arr[high]) {
        int pos = low + (double)((high -low)*(x - arr[low])/(arr[high]-arr[low]));
        if(arr[pos] < x){
            low = pos + 1;
        }
        else if (arr[pos] > x){
            high = pos - 1;
        }
        else {
            return pos;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 2, 3, 3, 4, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin >> x;
    cout << interpolationSearch(arr, n, x);
    return 0;
}