// Klimov, k = 12 + 2

#include <iostream>

using namespace std;

int main() {
    int count = 0, n;
    do {
        cin >> n;
        if (n < 0 && n % 2 == 0) {
            count++;
        }
    } while (n != -1);
    cout << count << "\n";
}