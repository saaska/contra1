#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 0;
    cin >> n;
    while (n / 2) {
        cin >> n;
        m = m + 1;
        if (n == -1) {
            cout << "-1" << endl;
        }
    }
}
//Слепцова Лилия 26