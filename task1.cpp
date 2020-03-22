#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    if (a == 0 || b == 0) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        cout << "x < " << b/a << endl;
    }
}
// ATLASOV GEORGII, k = 1