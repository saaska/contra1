#include <iostream>
using namespace std;
// вариант 4, Бузинаев
int main(){
    int a=0,i=0;
    while (a!=-1){
        cin >> a;
        if (a > 0 && a%2==1){
            i++;
        }
    }
    cout << i;
    return 0;
}