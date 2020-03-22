#include <iostream>

using namespace std;

int main() {
    int n, kol;
    kol = 0;
    cin >> n;
    int *a;
    a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "[" << i << "]" << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > a[i+1]) {
            a[i] = a[i+1];
            cout << a[i] << endl; //error
        }
    }
}
// ATLASOV GEORGII, k = 3