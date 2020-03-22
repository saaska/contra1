#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i = 0;
	int w = 0;
	do {
		cin >> w;
		if ((w % 2 != 0) && (w < 0)) {
			i++;
		}
	} while (w != -1);
	cout << i << endl;
}