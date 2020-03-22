#include <iostream>
using namespace std;
// вариант 3,Бузинаев
int main(){
    float a, b, X;
    cin >> a >> b;
    X = b/a;
    if (a != 0){
        cout << "x>" << X;
    }else{
        cout << "NO SOLUTION";
    }
    return 0;
}