//Baishev Duolan k == 7

#include <iostream>
using namespace std;

int main() {
	long long a2, a1, n, k = 0;
	cin >> n;
	cin >> a1;
	for (int i = 1; i < n; i++) {
		cin >> a2;
		if (a1 > a2) {
			k++;
		}
	}
	a1 = a2 + 1;
	if (a1 > a2) {
		k++;
	}
	cout << k;
	return 0;
}