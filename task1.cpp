//Михайлов Артур ИВТ-19-3
//k = 8
#include <iostream>
using namespace std;
int main(){
    float a, b, c;
    cin >> a >> b;
    c = b/a;
    if (a < 0 && b >=0){
        cout << "X" << "<=" << c;
        }
    if (a < 0 && b < 0){
        cout << "X" << "<=" << c;
        }
     if (a > 0 && b < 0){
         cout << "X" << ">=" << c;
         }
    if (a == 0){
        cout << "NO SOLUTION";
        }
    if (a > 0 && b > 0){
        cout << "X" << ">=" << c;
    }
    return 0;


    }