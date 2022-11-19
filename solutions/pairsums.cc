// pairsums
#include <bits/stdc++.h>
using namespace std;
int main() {
	// setup
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin >> n;
	vector<int> v(n);
	for (long long i = 0; i < n; ++i) cin >> v[i];
	long long res = 0;
	for (auto i : v) {
		res += i & 1;
	}                        // count the number of odd numbers
	cout << res * (n - res); // number of permutations of odd + even only
}
