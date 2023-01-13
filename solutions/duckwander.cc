// duckwander
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

int main() {
	fast();
	ll n, x(0), y(0);
	cin >> n;
	rep(i, 0, n) {
		string s;
		ll k;
		cin >> s >> k;
		if (s == "UP") {
			y += k;
		} else if (s == "DOWN") {
			y -= k;
		} else if (s == "LEFT") {
			x -= k;
		} else if (s == "RIGHT") {
			x += k;
		}
	}
	cout << x << ' ' << y << nl;
}
