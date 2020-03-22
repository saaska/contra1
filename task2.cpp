#include <iostream>
using namespace std;

// НИКОЛАЕВ САНДАЛ 13 пиши

int main() {

	int x, a;
	x = 0;
	a = 0;
	while (x != -1) {
		cin >> x;
		if (x < 0 && x % 2 == 1) {
			a++;
		}
		a++;
		cout << a;
	}
}