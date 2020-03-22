// Klimov, k = 12 + 2 + 2

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = n;
    int *a;
    a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i+1] >= a[i]) {
            count--;
        }
    }
    cout << count << "\n";
}