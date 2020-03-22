#include <iostream>
using namespace std;

int main(){
float a, b;
cin >> a >> b;
if( b / a == 0 ){
    cout << "NO SOLUTION";
}
else{
    cout << "x <=" << " " << b/a;
}
return 0;
}
