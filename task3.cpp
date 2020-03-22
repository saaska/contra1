//Павлов Афанасий Радионович зд2 К 12
#include <iostream>

using namespace std;

int main(){
    int n,i,*a,j,k = 0;
    cin >> n;
    a = new int[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            k++;
    cout << k << endl;
}

