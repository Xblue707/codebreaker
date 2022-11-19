#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int pigeonsInHoles[k];

	// this will allow us to keep track of the max value of pigeonsInHoles
	multiset<int> sortedPigeonsInHoles;

	// initialise both containers
	for (int i = 0; i < k; ++i) {
		pigeonsInHoles[i] = 0;
		sortedPigeonsInHoles.insert(0);
	}

	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		sortedPigeonsInHoles.erase(
				sortedPigeonsInHoles.find(pigeonsInHoles[b % k]));
		if (a == 0) {
			sortedPigeonsInHoles.insert(pigeonsInHoles[b % k] - 1);
			pigeonsInHoles[b % k]--;
		} else {
			sortedPigeonsInHoles.insert(pigeonsInHoles[b % k] + 1);
			pigeonsInHoles[b % k]++;
		}
		cout << *(--sortedPigeonsInHoles.end()) << '\n';
	}
}
