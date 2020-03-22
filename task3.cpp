// k = 21 Монастырев Ньургун ИВТ-19-2
#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            count++;
    }

    if (a[n - 2] > a[n - 1] || (count == 0 && a[n - 2] <= a[n - 1]))
        count++;

    cout << count;
}