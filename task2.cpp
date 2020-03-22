#include <iostream>

// Полянский Илья K = 19

int main()
{
    using namespace std;

    // число неотрицательных четных элементов

    long long x;
    unsigned count = 0;

    while (x != -1) {
        cin >> x;

        if ( (x % 2 == 0) && (x >= 0) ) {
            count++;
        }
    }

    cout << count;
    return 0;
}