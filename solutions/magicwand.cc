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
typedef vector<ll> vi;
typedef pair<int, int> ii;
typedef pair<ll, ll> pi;
typedef vector<pi> vpi;
#define nl '\n'
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

int h, w, x, y, t;
int gx[] = {1, 0, -1, 0}, gy[] = {0, 1, 0, -1};

bool chk(int a, int b) { return a >= 0 && a < h && b >= 0 && b < w; }

int main() {
	setup;
	cin >> h >> w >> x >> y >> t;
	// because 1-indexed, set to 0 index
	x--, y--;

	int adj[h][w], ans[h][w];
	bool vis[h][w];
	// why am i using memset again
	memset(adj, 0, sizeof(adj));
	memset(ans, 0, sizeof(ans));
	memset(vis, 0, sizeof(vis));
	ans[x][y] = 1;

	rep(i, 0, h) rep(j, 0, w) cin >> adj[i][j];

	qu<ii> q;
	q.push(mpr(x, y));

	while (!q.empty()) {
		ii tmp = q.front();
		q.pop();
		vis[tmp.fi][tmp.se] = 1; // visited

		rep(i, 0, 4) {
			ii tx = mpr(tmp.fi + gx[i], tmp.se + gy[i]);
			if (!chk(tx.fi, tx.se)) continue;
			if (vis[tx.fi][tx.se]) continue;

			if (abs(adj[tx.fi][tx.se] - adj[x][y]) <= t) {
				vis[tx.fi][tx.se] = ans[tx.fi][tx.se] = 1;
				q.push(tx);
			}
		}
	}

	rep(i, 0, h) {
		rep(j, 0, w) { cout << ans[i][j]; }
		cout << nl;
	}
}
