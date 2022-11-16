// dijkstra
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;

#define fi first
#define se second
const int INF = 1e9;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int v, e;
	cin >> v >> e;

	vector<pi> adj[v];
	int dist[v];

	// set up the adjlist
	for (int i = 0; i < v; i++) dist[i] = INF;
	for (int i = 0; i < e; i++) {
		int u, v, wi;
		cin >> u >> v >> wi;
		u--, v--;
		adj[u].push_back(pi(v, wi));
		adj[v].push_back(pi(u, wi));
	}

	priority_queue<pi> q;  // (dist, node)
	q.push(pi(-0, 0));
	while (!q.empty()) {
		pi cur = q.top();
		q.pop();
		int curd = -cur.fi, curn = cur.se;
		if (curd > dist[curn]) continue;
		for (int i = 0; i < adj[curn].size(); i++) {
			pi nx = adj[curn][i];
			int d = curd + nx.se;
			if (d < dist[nx.fi]) {
				dist[nx.fi] = d;
				q.push(pi(-d, nx.fi));
			}
		}
	}
	cout << dist[v - 1] << '\n';
}
