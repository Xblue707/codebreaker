#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main() {
	int n, sum = 0, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	sort(a, a + n, cmp);

	if (n > 3) {
		for (int i = 0; i < n; i++) {
			if ((i + 1) % 4 == 0) sum -= a[i];
		}
	}

	cout << sum;
}
