#include <bits/stdc++.h>
using namespace std;

#define rep(v, s, e) for (int(v) = s; v < e; ++v)
#define all(v) (v).begin(), (v).end()

int main() {
	int n;
	cin >> n;
	int a[n];
	rep(i, 0, n) cin >> a[i];

	vector<pair<int, int>> v;
	rep(i, 0, n) v.push_back({a[i], i + 1});
	sort(all(v));

	rep(i, 0, n) {
		if (i) cout << ' ';
		cout << v[i].second;
	}
}
