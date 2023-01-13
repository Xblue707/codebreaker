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

const int INF = 1e6;
vi segTree, a;

int build(int idx, int l, int r) {
	if (l == r) {
		segTree[idx] = a[l];
		return segTree[idx];
	}

	int mid = (l + r) / 2;
	return segTree[idx] =
						 max(build(idx * 2, l, mid), build(idx * 2 + 1, mid + 1, r));
}

int query(int idx, int l, int r, int x, int y) {
	if (r < x || l > y) return 0;
	if (l >= x && y >= r) return segTree[idx];

	int mid = (l + r) / 2;
	return max(query(idx * 2, l, mid, x, y),
						 query(idx * 2 + 1, mid + 1, r, x, y));
}

int main() {
	fast();
	int t;
	cin >> t;
	a = vi(INF + 2, 0);
	segTree = vi(4 * INF + 2);

	rep(i, 1, INF + 1) {
		for (int j = i; j <= INF; j += i) a[j] += i;
	}

	build(1, 1, INF);

	while (t--) {
		int n;
		cin >> n;
		cout << query(1, 1, INF, 1, n) << nl;
	}
}
