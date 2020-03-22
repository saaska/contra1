#include <iostream> //Никита Суслонов 23

using namespace std;

int main(){
    int n, count, i, x;
    x = 0;
    count = 1;
    cin >> n;
    int* A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = n - 1; i >= 0; i--) {
        if (A[i] < A[i-1])
            count++;
        else {
            count = 1;
            x++;
        }
    }
    cout << x;
}