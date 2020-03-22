//вариант 15  Кириллов Иван
#include <iostream>
using namespace std;
int main(){
    int n, d=0, m=0;
    int *a;
    cin >> n;
    a = new int [n];
    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }
    for (int l = 0; l < n; l++){
        if ((a[l]<a[l-1]) ||  (a[l+1]<a[l])){
            d++;
            if (m < d){
                m=d;
            }
        }
        if (a[l]<=a[l+1]){
            d = 0;
        }
    }
    cout << m;
    return 0;
}