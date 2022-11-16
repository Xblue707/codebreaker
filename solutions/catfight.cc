// catfight
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, p;
	cin >> n >> p;
	vector<ll> v(n);
	for (ll i = 0; i < n; ++i) cin >> v[i];

	ll a = 0, b = 0;
	ll c = v[0], res = 0;

	while (a <= b + 1 && b < n) {
		if (c < p) {
			res = max(res, b - a + 1);
			b++;
			if (b < n) {
				c += v[b];
			}
		} else {
			c -= v[a];
			a++;
		}
	}

	cout << res;
}
