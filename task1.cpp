#include <iostream>

using namespace std;

int main(){
    float a,b;
    cin >> a >> b;
    if(a<b && a!=0){
        cout << "x<" << b/a << endl;
    }else if(a>b && a!=0){
        cout << "x<" << b/a << endl;
    }else if(a==b && a!=0){
        cout << "x<" << b/a << endl;
    }else if(a==0){
        cout << "NO SOLUTION" << endl;
    }
}
//Васильев Гаврил