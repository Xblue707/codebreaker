#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	if (k > n) {
		cout << 0;
		return 0;
	}

	vector<int> v(n + k + 1, 0);
	for (int i = k; i < n + k; ++i)  cin >> v[i]; 

	multiset<int> s;
	for (int j = 0; j < k; ++j) { s.emplace(v[j]); }

	for (int l = k; l < n + k + 1; ++l) {
		v[l] = max(v[l], *(s.begin()));
		s.erase(s.find(v[l - k]));
		s.emplace(v[l]);
	}

	cout << v[n + k];
}
