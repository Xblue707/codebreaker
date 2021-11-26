#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n;

	bool check = 1;
	deque<int> smurfs;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (check) {
			smurfs.push_front(k);
			check = 0;
		}
		else {
			smurfs.push_back(k);
			check = 1;
		}
	}

	if (!check)
		for (auto i : smurfs) { cout << i << " "; }
	else
		for (int i = smurfs.size() - 1; i >= 0; i--) { cout << smurfs[i] << " "; }
}
