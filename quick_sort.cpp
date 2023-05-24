#include<iostream>

using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
	cout << endl;
}
void quickSort(int a[], int l, int r){
	int p = a[r];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}

int main()
{
	int a[] = {4, 3, 5, 1, 2, 7, 9, 8};
    int n = sizeof(a)/sizeof(a[0]);
	quickSort(a, 0, n-1);
	printArray(a, n);
    return 0;
}