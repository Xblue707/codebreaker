// swapsort
#include <bits/stdc++.h>
using namespace std;
#define fr(it, start, end) for (int it = start; it < end; ++it)
#define int long long

int32_t main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; ++i) cin >> p[i];
	
	vector<int> a(p.begin(), p.end());
	sort(a.begin(), a.end());
	vector<bool> b(n);
	int curr = 0;
	
	fr(i, 0, n) {
		b[i] = a[i] == p[i];
		curr += b[i];
	}

	int q; cin >> q;;
	int res = 0;
	while (q--) {
		int l, r; cin >> l >> r;
		l--; r--;
		swap(p[l], p[r]);
		if (b[l] != (a[l] == p[l])) {
			b[l] = a[l] == p[l];
			if (b[l]) { curr++; }
			else { curr--; }
		}
		
		if (b[r] != (a[r] == p[r])) {
			b[r] = a[r] == p[r];
			if (b[r]) { curr++; }
			else { curr--; }
		}
		if (curr == n) { res++; }
	}

	cout << res << '\n';
	for (auto i : p) cout << i << ' ';
}
