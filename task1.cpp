//Pavlov Vadim 6
#include <iostream>
using namespace std;
int main(){
    float a,b;
    cin >> a;
    cin >> b;
    if (a!=0)
        cout << "x" << "<=" << b/a;
    if (a==0)
        cout << "NO SOLUTION";
}