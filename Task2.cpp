//Устинов Кирилл k=27
#include <iostream>

using namespace std;

int main() {
	int f=0, n;
	while (n != -1) {
		cin >> n;
		if ((n >= 0) && (n % 2 == 0)) {
			f++;
		}
	}
	cout << f << endl;
}