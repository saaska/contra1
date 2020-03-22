// Самойлов Анатолий, k = 20

#include <iostream>

using namespace std;

int main() {
    int x = 0, count = 0;
    while (x != -1) {
        cin >> x;
        if ( (x < 0) && (x % 2 != 0) ) {
            count++;
        }
    }
    cout << count;
    return 0;
}