//колодезникова Снежана, k = 14
#include <iostream>
using namespace std;

int main(){
    float a, b, x;
    cin >> a >> b;
    x = b / a;
    if (a < 0){
        cout << "x >= " << x;
    }else{
        cout << "x <= " << x;
    }
    return 0;
}