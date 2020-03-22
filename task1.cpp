/*
Васильева Карина
Введите с клавиатуры вещественные числа a, b и выведите решение
неравенства: k = 4
*/

#include <iostream>

using namespace std;

int main(){

    float a, b, x;

    cin >> a >> b;

    x = b/a;

    if (a < 0)
        cout << "x <= " << x;
    else
        if (a > 0)
            cout << "x >= " << x;

    else
        cout << "NO SOLUTION";

    return 0;
}