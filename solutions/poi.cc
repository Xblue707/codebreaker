#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef pair<pair<int, int>, int> iii;
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

bool cmp(iii a, iii b) {
	if (a.fi.fi == b.fi.fi) {
		if (a.fi.se == b.fi.se) {
			return a.se < b.se;
		}
		return a.fi.se > b.fi.se;
	}
	return a.fi.fi > b.fi.fi;
}

int main() {
	fast();
	int n, t, p;
	cin >> n >> t >> p;
	p--;
	int score[t], graph[n][t];

	memset(score, 0, sizeof(score));
	rep(i, 0, n) {
		rep(j, 0, t) {
			cin >> graph[i][j];
			if (graph[i][j] == 0) score[j]++;
		}
	}

	iii a[n];

	rep(i, 0, n) {
		int cur = 0, cnt = 0;
		rep(j, 0, t) {
			cur += graph[i][j] * score[j];
			cnt += graph[i][j];
		}
		a[i] = iii(ii(cur, cnt), i);
	}

	sort(a, a + n, cmp);

	rep(i, 0, n) {
		if (a[i].se == p) {
			cout << a[i].fi.fi << " " << i + 1 << nl;
			break;
		}
	}
}
