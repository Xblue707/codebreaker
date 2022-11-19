// eedu
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	map<int, bool> mp;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) {
		int e;
		cin >> e;
		mp[e] = 1;
	}

	reverse(a, a + n);
	for (int i = 0; i < n; i++)
		if (mp[a[i]]) cout << a[i] << ' ';
}
