#include <iostream>
using namespace std;

int main() {
	int n, c;
	cin >> n >> c;

	if (c > 0) {
		int counter = 1;
		for (int i = 1; i < c; i++) {
			if (n != 1) {
				n % 2 == 0 ? n /= 2 : n = 3 * n + 1;
				counter++;
			}
		}
		if (c <= counter)
			cout << n;
		else
			cout << -1;
	}
}
