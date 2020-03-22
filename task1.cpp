// k = 17 Монастырев Ньургун ИВТ-19-2
#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    if (a == 0 && b <= 0)
        cout << "NO SOLUTION";
    else{
        if (a == 0 && b > 0)
            cout << "x == любой";
        else
            cout << "x < " << b / a;
    }
}