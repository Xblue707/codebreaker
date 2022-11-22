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
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

ll cnt, p[50003], top, bo[100000], b[10000000];

struct node {
	ll id, po;
};

node w[50004];
bool cmp(node a, node b) { return a.po < b.po; }

int main() {
	int m;
	cin >> m;
	memset(bo, 0, sizeof(bo));
	top = 0;

	rep(i, 1, m + 1) {
		cin >> w[i].po >> w[i].id;
		p[i - 1] = w[i].id;
	}

	sort(w + 1, w + 1 + m, cmp);
	sort(p, p + m);

	top = unique(p, p + m) - p;
	ll ans = 99999999999999999, s = 0;

	for (int l = 1, r = 0; l <= m; l++) {
		for (; s < top && r < m; r++) {
			int x = lower_bound(p, p + top, w[r + 1].id) - p;
			s += (++bo[x]) == 1;
		}
		if (s == top) ans = min(ans, w[r].po - w[l].po);
		int x = lower_bound(p, p + top, w[l].id) - p;
		s -= (--bo[x]) == 0;
	}
	cout << ans << nl;
}
