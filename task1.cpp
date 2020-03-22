#include <iostream> // Вешников, k = 6
using namespace std;

int main(){
    float a, x, b;
    bool d = false;
    cin >> a >> b;
    
    x = b / a;
    if (a != 0 && b == 0 && d == false){
        cout << "X<=0";
        d = true;
    }
    if (a == 0 && b < 0 && d == false){
        cout << "NO SOLUTION";
        d = true;
    }
    if (a == 0 && b >= 0 && d == false){
        cout << "X (-inf; +inf)";
        d = true;
    }
    
    if (a * x <= b && d == false) {
		cout << "X<=" << x;
		d = true;
	}
    if (a * x > b && d == false){
        cout << "NO SOLUTION";
        d = true;
    }
}