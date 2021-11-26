#include <iostream>
using namespace std;
int main() {
	int n, midpos, mid;
	cin >> n;
	midpos = n / 2 + 1;
	for (int i = 1; i <= n; i++) {
		int m;
		cin >> m;

		if (i == midpos) { mid = m; }
	}
	cout << mid;
}
