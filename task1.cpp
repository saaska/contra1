//K = 2 ; ADAMOV AYAAL ; IVT-19-2

#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin >> a >> b;
    if (a==0 && b<0){
        cout << "NO SOLUTION" << endl;
    }
    else if (a<0){
        cout << "X>=" << b/a << endl;
    }
    else if (a==0 && b>=0){
        cout << "X∈R" << endl;
    }
    else{
        cout << "X<=" << b/a << endl;
    }
}