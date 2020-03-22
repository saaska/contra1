//Baishev Duolan k == 3

#include <iostream>
using namespace std;

int main() {
    double x,a,b;
    cin >> a >> b;
    if ((a == 0) && (b >= 0))
        cout << "NO SOLUTION";
    else
        if ((a == 0) && (b < 0))
            cout << "ANY NUMBER";
        else
            cout << b/a;

}