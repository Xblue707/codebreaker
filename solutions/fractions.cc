// fractions
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
#define p pair<int, int>
#define f0r(i,n) for (int i=0; i<n; i++)
#define far(i,v) for (auto i : v)

bool cmp(p a, p b) {
	return (ld)(a.first) / (ld)(a.second) < (ld)(b.first) / (ld)(b.second);
}

int32_t main() {
	int n; cin >> n;
	vector<p> v(n);
	f0r(i, n) cin >> v[i].first >> v[i].second;
	stable_sort(v.begin(), v.end(), cmp);
	far(i, v) { 
		cout << i.first << ' ' << i.second << '\n';
	}
}
