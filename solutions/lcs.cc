// lcs
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

int dp[1000][1000];
string a, b;

int lcs(int i, int j) {
	if (i < 0 || j < 0) return 0;
	if (dp[i][j] >= 0) return dp[i][j];
	if (a.at(i) == b.at(j))
		dp[i][j] = lcs(i - 1, j - 1) + 1;
	else
		dp[i][j] = max(lcs(i, j - 1), lcs(i - 1, j));
	return dp[i][j];
}

int main() {
	cin >> a >> b;
	memset(dp, -1, sizeof(dp));
	cout << lcs(a.length() - 1, b.length() - 1);
}
