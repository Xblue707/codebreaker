#include <iostream>
using namespace std;

int main() {
	int n, k, gifts = 0, timings[100];
	cin >> n >> k >> timings[0];
	for (int i = 1; i < n; i++) {
		cin >> timings[i];
		if (timings[i - 1] - timings[i] >= k) gifts++;
	}
	cout << gifts;
}
