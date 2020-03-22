#include <iostream>
//Yakovleva Tanya 23+1=24 24+1=25
using namespace std;
int main()
{
	int max = 0, * a, i, A, k = 1, n;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) {
			k++;
		}
		else {
			if (k >= max)
				max = k;
			k = 1;
		}
	}
	if (k > max)
		cout << k << endl;
	else
		cout << max << endl;
	return 0;
}