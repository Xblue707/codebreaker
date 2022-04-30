#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	long mod = 998244353;
	long long fib[n];

	fib[0] = 0;
	fib[1] = 1;

	cout << fib[0] << '\n' << fib[1] << '\n';

	if (n >= 2) {
		for (int i = 2; i <= n; ++i) {
			fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
			cout << fib[i] << '\n';
		}
	}
}

