// bookshelf
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
#define pr pair
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

int main() {
	setup;
	ll t;
	cin >> t;
	mp<ll, ll> m;
	ll lmost = 0, rmost = 1;
	rep(i, 0, t) {
		int p, k;
		cin >> p;
		if (p == 1) {
			cin >> k;
			m[k] = lmost;
			lmost--;
		} else if (p == 2) {
			cin >> k;
			m[k] = rmost;
			rmost++;
		} else if (p == 3) {
			lmost++;
		} else if (p == 4) {
			rmost--;
		} else if (p == 5) {
			cin >> k;
			cout << m[k] - lmost << nl;
		} else if (p == 6) {
			cin >> k;
			cout << rmost - m[k] << nl;
		}
	}
}
