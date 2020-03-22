#include <iostream>
using namespace std;
int main(){
	double a, x = 0, b;
	bool prov = true;
	cin >> a >> b;
	x = b/a;
	if(a != 0 && x != 0){
	    cout << "x > " << x;
	}else{
	    cout << "NO SOLUTION";
	}
}
// Дьячковский Аман k = 7