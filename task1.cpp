#include <iostream>

using namespace std;

int main(){
    double a, b, x;
    cin >> a >> b;
    x = b / a;
    if(x * a >= b) cout << "X >= " << b / a << endl;
    else cout << "NO SOLUTION" << endl;
}
// Васильев Айхал, 4