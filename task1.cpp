// Klimov, k = 12

#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "X - any number\n";
        } else {
            cout << "NO SOLUTION\n";
        }
    } else {
        cout << "X>=" << b / a << "\n";
    }
}