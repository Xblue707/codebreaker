#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	set<int> cats;

	// get the input
	for (int j = 0; j < m; ++j) {
		int k, l;
		cin >> k >> l;
		if (k != l) {
			cats.insert(k);
			cats.insert(l);
		}
	}
	int ans = n - cats.size();
	cout << ans;
}
