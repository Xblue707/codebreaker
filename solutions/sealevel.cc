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
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef pair<ll, ll> pp;
typedef vector<ll> vl;
#define nl '\n'
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define st set
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

int main() {
	ll n;
	cin >> n;

	vector<pi> edges[n + 2];
	ll dis[n + 2];
	bool vis[n + 2];
	memset(vis, 0, sizeof(vis));

	rep(i, 1, n) {
		ll u, v, w;
		cin >> u >> v >> w;
		edges[u].push_back(pi(v, w));
		edges[v].push_back(pi(u, -w));
	}

	dis[1] = 0;
	vis[1] = 1;

	qu<ll> q;
	q.push(1);

	while (!q.empty()) {
		ll cur = q.front();
		q.pop();
		rep(i, 0, sz(edges[cur])) {
			pi nx = edges[cur][i];
			if (vis[nx.fi]) continue;
			dis[nx.fi] = dis[cur] + nx.se;
			vis[nx.fi] = 1;
			q.push(nx.fi);
		}
	}

	ll t;
	cin >> t;
	while (t--) {
		ll x, y;
		cin >> x >> y;
		cout << dis[y] - dis[x] << nl; // heres a comment
	}
}
