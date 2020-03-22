#include <iostream>

// Полянский Илья K = 18

int main()
{
    using namespace std;

    double a, b, x;


    cin >> a >> b;
    x = b/a;

    if (a * x <= b) {
        cout << "X <= " << b/a;
    }
    else cout << "NO SOLUTION";

    return 0;
}