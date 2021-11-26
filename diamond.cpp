#include <bits/stdc++.h>
using namespace std;
void printDiamond(int n) {
	int i, j, s;
	for (i = 1; i <= n; i++) {
		for (s = 1; s <= n - i; s++) cout << ' ';
		for (j = 1; j <= i * 2 - 1; j++) cout << '*';
		cout << '\n';
	}
	for (i = n - 1; i >= 1; i--) {
		for (s = 1; s <= n - i; s++) cout << ' ';
		for (j = 1; j <= i * 2 - 1; j++) cout << '*';
		cout << '\n';
	}
}

int main() {
	int n;
	cin >> n;
	printDiamond(n);
	return 0;
}
