#include <bits/stdc++.h>
using namespace std;

int n;
struct edge {
	int a, b, w;
	edge(int _a = 0, int _b = 0, int _w = 0) : a(_a), b(_b), w(_w) {}
};

vector<edge> edgeList;
bool cmp(edge x, edge y) {
	return x.w < y.w;
} 

int p[1000007];
int par(int x) { return (x == p[x]) ? x : p[x] = par(p[x]); }

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int e;
	cin >> n >> e;
	for (int i = 0; i < e; ++i) {
		edge l;
		cin >> l.a >> l.b >> l.w;
		edgeList.push_back(l);
	}

	for (int i = 1; i <= n; i++) p[i] = i;

	sort(edgeList.begin(), edgeList.end(), cmp);
	int ans = 0;
	for (vector<edge>::iterator it = edgeList.begin(); it != edgeList.end();
			 ++it) {
		if (par(1) == par(n)) break;
		if (par(it->a) == par(it->b)) continue;
		p[par(it->a)] = par(it->b);
		ans = it->w;
	}
	cout << ans;
}
