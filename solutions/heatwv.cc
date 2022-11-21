// heatwv
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

#define INF 0x3f3f3f3f3f

vi dist(2505, INF);
vector<pr<ll, ll>> adj[2505];
// ll n;

int main() {
	setup;
	ll n, m, start, end;
	cin >> n >> m >> start >> end;
	rep(i, 0, m) {
		ll u, v, w;
		cin >> u >> v >> w;
		u--;
		v--;
		adj[u].pub(mpr(v, w));
		adj[v].pub(mpr(u, w));
	}

	start--;
	end--;
	vc<bool> vis(2505);
	pq<pr<ll, ll>> q;
	q.push({0, start});
	dist[start] = 0;
	while (!q.empty()) {
		ll a = q.top().se;
		q.pop();
		if (vis[a]) continue;
		vis[a] = 1;
		rap(i, adj[a]) {
			ll b = i.fi, s = i.se;
			if (dist[a] + s < dist[b]) {
				dist[b] = dist[a] + s;
				q.push(mpr(-dist[b], b));
			}
		}
	}

	cout << dist[end];
}
