// clocktower
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, h;
	cin >> n >> h;
	ll factor = h / n, ans = 0;
	for (ll i = 1; i < n; ++i) {
		ll s;
		cin >> s;
		if (s >= factor * i) ans++;
	}

	if (ans == 0) {
		cout << "Yes";
	} else {
		cout << "No\n" << ans;
	}
}
