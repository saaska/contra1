#include <iostream>
using namespace std;
//1-20
int main(){
    double a, b;
    cin >> a, b;
    if (b != 0 && a == 0)
            cout << "no solution" << endl;
    else
        if (a == 0 && b == 0)
            cout << "VSE CHISLA" << endl;
        else
            cout << "X >= " << b/a << endl;
    return 0;
}