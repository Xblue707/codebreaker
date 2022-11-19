#include <bits/stdc++.h>
using namespace std;

#define lg long
#define ll long long
#define ull unsigned long long

#define loop(var, start, end) for (auto var = start; var < end; ++var)
#define dloop(var, start, end) for (auto var = start; var > end; --var)
#define iloop(var, st) for (auto var : st)

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;

	ll l[n], mx[n];

	loop(i, 0, n) cin >> l[i];

	if (n == 1) {
		cout << max(l[0], (ll)0);
		return 0;
	}
	mx[0] = max((ll)0, l[0]);
	mx[1] = max(l[1], l[0]);

	loop(j, 2, n) { mx[j] = max(mx[j - 1], max(l[j] + mx[j - 2], (ll)0)); }
	cout << mx[n - 1];
}
