#include <iostream>

// Полянский Илья K = 20

int main()
{
	using namespace std;

	// максимальную длину убывающего отрезка

	unsigned n, count = 1, max_count = 0;
	long long x, preview;

	cin >> n;
	cin >> preview;

	for (int i = 1; i < n; i++) {
		cin >> x;

		if (x < preview) {
			count++;
		}
		else {
			if (count > max_count) {
				max_count = count;
				count = 1;
			}
		}

		preview = x;
	}

	if (count > max_count) {
		max_count = count;
	}

	cout << max_count;
	return 0;
}