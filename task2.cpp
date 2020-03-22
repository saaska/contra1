// k = 19 Монастырев Ньургун ИВТ-19-2
#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;


    while (n != -1)
    {
        if (n >= 0 && n % 2 == 0)
            count++;
        cin >> n;
    }

    if (n >= 0 && n % 2 == 0)
        count++;

    cout << count;
}