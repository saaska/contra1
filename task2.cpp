//Михайлов Артур ИВТ-19-3
//k = 11

#include <iostream>
using namespace std;
int main(){
    int a, b;
    b = 0;
    a = 0;
    while (a != -1){
        cin >> a;
        if (a >= 0 && (a % 2 != 0)){
            b++;
            }
        }
    cout << b;

}