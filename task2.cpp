#include <iostream>

using namespace std;

int main() {
	int x, z;
	x = 0;
	z = 0;
	while (x != -1){
	    cin >> x;
	    if (x > 0 && x % 2 == 1){
	        z++;
		}
	}
	cout << z;
	return 0;
}