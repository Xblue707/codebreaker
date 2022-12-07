// collectmushrooms6
#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end) \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast() \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

int main() {
	fast();
	// cin
	int r, c, d, k;
	cin >> r >> c >> d >> k;
	char grid[r + 1][c + 1];
	rep(i, 1, r + 1) rep(j, 1, c + 1) cin >> grid[i][j];

	// 2d prefix sum
	int sum[r + 1][c + 1];
	rep(i, 0, r + 1) {
		rep(j, 0, c + 1) {
			if (i == 0 || j == 0)
				sum[i][j] = 0;
			else {
				int cur = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
				if (grid[i][j] == 'S') cur++;
				sum[i][j] = cur;
			}
		}
	}

	int cnt(0);
	rep(i, 1, r + 1) {
		rep(j, 1, c + 1) {
			if (grid[i][j] == 'M') {
				int top = max(1, i - d);
				int btm = min(r, i + d);
				int lft = max(1, j - d);
				int rt = min(c, j + d);
				if (sum[btm][rt] - sum[btm][lft - 1] - sum[top - 1][rt] +
								sum[top - 1][lft - 1] >=
						k)
					cnt++;
			}
		}
	}
	cout << cnt << nl;
}
