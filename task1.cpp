#include <iostream> //Никита Суслонов 21

using namespace std;

int main() {
    float a, b, x;
    cin >> a >> b;
    if ((a == 0 && b == 0) || ((a == 0) && (b < 0))) {
        cout << "NO SOLUTION";
    }
    else if ((a == 0) && (b > 0)) {
        cout << "x - any number";
    }
    else if ((a < 0) && (b >= 0)) {
        cout << "x > 0";
    }else{
        x = b / a;
        cout << "x < " << x;
    }
}