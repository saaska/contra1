//Абрамов Семён k=1;
#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cout << "Введите число a:\n";
    cin >> a;
    cout << "Введите число b:\n";
    cin >> b;

    if (a == 0 && b == 0){
        cout << "NO SOLUTION\n";
    }
    else{
        cout << 'x' << '<' << b/a;
    }
    return 0;
}
