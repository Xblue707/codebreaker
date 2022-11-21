// buffet
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';

int main() {
	// init
	setup;
	ll n, k;
	cin >> n >> k;
	ll dp[2][n], a[n], b[n];
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) cin >> b[i];
	memset(dp, 0, sizeof(dp));

	// base cases -- starting plates of food
	dp[0][0] = a[0], dp[1][0] = b[0];
	rep(i, 1, n) { // 1 to n-1 because we alr set base cases
		dp[0][i] = max(dp[0][i - 1], dp[1][i - 1] - k) +
							 a[i]; // remove k when we cross over
		dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] - k) +
							 b[i]; // add the new satisfaction to the current plate
	}

	cout << max(dp[0][n - 1], dp[1][n - 1]) << nl;
}
