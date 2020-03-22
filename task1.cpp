#include <iostream>
using namespace std;

int main(){
    float a,b,x;
    cin >> a >> b;
    if(a>0){
        cout << "x>=" << b/a;
    }
    else if(a<0){
        cout << "x<=" << b/a;
    }
    else{
        cout << "NO SOLUTION" << endl;
    }
}
//Никифоров Сергей, 20