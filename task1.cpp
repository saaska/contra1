// Самойлов Анатолий, k = 19

#include <iostream>

using namespace std;

int main() {
    float a, b, x;
    cin >> a >> b;

    x = b / a;
    if (a != 0) {
        cout << "x > " << x;
    }else{
        cout << "NO SOLUTION";
    }
    return 0;
}