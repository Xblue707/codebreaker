#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long n, q;
	cin >> n >> q;
	long original[n], ne[n + 1];
	ne[0] = 0;
	for (int i = 0; i < n; i++) cin >> original[i];
	for (int j = 1; j <= n; j++) {
		ne[j] = original[j - 1] + ne[j - 1];
	}

	for (int k = 0; k < q; k++) {
		long l, r;
		cin >> l >> r;
		cout << ne[r] - ne[l - 1] << '\n';
	}
}
