// Bài hackerrank https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
//Đếm số lần điểm của Mary phá kỷ lục cao và thấp
#include <iostream>
using namespace std;
void data(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    int score[n];
    data(score, n);
    int bestScore = score[0];
    int worstScore = score[0];
    int best = 0;
    int worst = 0;
    for(int i = 1; i < n; i++) {
        if (score[i] > bestScore) {
            best++;
            bestScore = score[i];
        }
        if (score[i] < worstScore) {
            worst++;
            worstScore = score[i];
        }
    }
    cout << best << " " << worst;
    return 0;
}