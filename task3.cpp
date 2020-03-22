// Самойлов Анатолий, k = 21

#include <iostream>

using namespace std;

int main() {
    int *A, n, max = 0, count = 0;
    cin >> n;
    A = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[i] <= A[i + 1]) {
            count++;
            if (count > max) {
                max = count;
            }
        }else{
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }
    max++;
    if (max > n) {
        cout << max - 1;
    }else{
        cout << max;
    }
    return 0;
}

