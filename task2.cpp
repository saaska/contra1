//Baishev Duolan k == 5

#include <iostream>
using namespace std;

int main() {
    long long a = 0, k = 0;
	while (a != -1) {
		cin >> a;
		if ((a >= 0) && (a % 2 == 0))
			k++;
	}
	cout << k;
	return 0;
}