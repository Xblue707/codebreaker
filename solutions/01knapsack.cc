#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, m;
	cin >> n >> m;
	long long w[500], v[500];
	for (long long i = 0; i < n; ++i) cin >> w[i] >> v[i];

	vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));	
	for (long long i = 0; i <= n; ++i) {
		for (long long j = 0; j <= m; ++j) {
			if (i == 0 || j == 0) dp[i][j] = 0;

			else if (w[i-1] <= j) {
				dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
			}
				
			else dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][m];
}
