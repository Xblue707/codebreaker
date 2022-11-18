#include <bits/stdc++.h>
using namespace std;

int n, ans = INT_MAX, A[1000005], dp[1000005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];

	for (int j = 0; j < n; j++) {
		dp[j] = min(dp[j - 1] + A[j], A[j]);
		ans = min(ans, dp[j]);
	}
	cout << ans;
}
