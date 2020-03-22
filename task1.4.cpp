#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, x;
	cin >> a >> b;

	if (a != 0 && b != 0) {
		x = (b / a);
		cout << "X > " << x << endl;
	}
	else {
		cout << "No solution" << endl;
	}
}