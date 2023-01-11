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

const ll INF = 1e9;
const ll M = 1e9 + 7;

// disjoint set union!
vc<ll> dsu;

ll find(ll n) {
	if (dsu[n] == n) return n;
	return dsu[n] = find(dsu[n]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, c;
	cin >> n >> c;

	dsu.resize(n + 5);
	rep(i, 0, n + 1) dsu[i] = i;

	while (c--) {
		ll e;
		cin >> e;
		ll x = find(e);

		if (x == 0) x = find(n);

		cout << x << '\n';
		dsu[x] = find(dsu[x - 1]);
	}
}
