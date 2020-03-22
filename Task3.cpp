//Устинов Кирилл k=29
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a = 0, *A, num = 0;
    cin >> a;
    A = new int[a];
    for (int n = 0; n < a; n++) {
        cin >> A[n];
    }
    for (int n = 0; n < a; n++) {
        if (n == 0)
            num++;
        else if (A[n - 1] > A[n]) num++;
    }
    cout << num << endl;
}