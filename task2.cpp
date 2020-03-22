//Колодезникова Снежана, k = 16
#include <iostream>
using namespace std;

int main(){
    int n, k;
    k = 0;
    do {
        cin >> n;
        if ((n > 0) && (n%2!=0)){
            k = k + 1;
        }
    } while(n!=-1);
    cout << k;
    return 0;
}