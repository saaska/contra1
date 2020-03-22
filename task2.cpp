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
        if ((a[i] > 0) && (a[i] % 2)) {
            kol = kol + 1;
        }
    }
    cout << kol << endl;
}
// ATLASOV GEORGII, k = 2