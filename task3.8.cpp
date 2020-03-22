#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int w = 0;
	int *A;
	cin >> w;
	A = new int[w];
	for (int i = 0; i < w; i++) {
		cin >> A[i];
	}

	int s = 0;
	for (int i = 0; i < w; i++) {
		if ((A[i] > A[i+1]) && (A[i] != 0)) {
			s++;
		}
	}
	cout << s;
}