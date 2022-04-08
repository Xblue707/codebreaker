#include <bits/stdc++.h>
using namespace std;

#define FOR(n) for (int i = 0; i < n; ++i)
#define pf printf

int main() {
	int n;
	cin >> n;
	int arr[n];

	FOR(n) cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;
	int q;
	FOR(m) {
		cin >> q;
		int lb = distance(arr, lower_bound(arr, arr + n, q));
		int ub = distance(upper_bound(arr, arr + n, q), arr + n);
		pf("Smaller: %d, Greater: %d\n", lb, ub);
	}
}
