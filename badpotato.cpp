#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int potatoes[n] = {0};
	int *p = potatoes;

	for (int i = 0; i < n; i++) cin >> *(p + i);

	int sum = 0, max = 0;

	for (int i = 0; i <= n; i++) {
		if (*(p + i) != -1 and i != n) sum += *(p + i);
		else {
			if (sum > max) max = sum;
			sum = 0;
		}
	}

	cout << max;
}
