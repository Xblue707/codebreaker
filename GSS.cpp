#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int i, int j) { return i > j; }

int main() {
	int n, sum = 0, divisor = 0, a[100];
	bool toggle = 1;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + n, cmp);

	if (n > 3) {
		for (int i = 0; i < n; ++i) {
			if ((i + 1) % 4 == 0) { sum -= a[i]; }
		}
	}

	cout << sum;
}
