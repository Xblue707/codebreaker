#include <iostream>
using namespace std;

int main() {
	int n, i, j, s;
	cin >> n;

	for (i = 1; i <= n; i++) {
		for (s = 0; s < n - i; s++) cout << ' ';
		for (j = 0; j < i * 2 - 1; j++) cout << '*';
		cout << '\n';
	}

	for (i = n - 1; i >= 1; i--) {
		for (s = 0; s < n - i; s++) cout << ' ';
		for (j = 0; j < i * 2 - 1; j++) cout << '*';
		cout << '\n';
	}
}
