#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define raz(x, start, end)                                                   \
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
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

const ll MADAI = (ll)1e18;

int main() {
	setup;
	ll n, m, s;
	cin >> n >> m >> s;

	vc<vi> varge(n + 5, vi(m + 5, MADAI));
	qu<pi> q;

	raz(i, 1, s + 1) {
		ll a, b;
		cin >> a >> b;
		varge[a][b] = 1;
		q.push({a, b});
	}

	vi narugaX = {-1, 1, 0, 0, -1, 1, -1, 1},
		 narugaY = {0, 0, -1, 1, -1, -1, 1, 1};

	while (!q.empty()) {
		ll ais = q.front().fi, bis = q.front().se;
		q.pop();

		raz(t, 0, 8) {
			ll eins = ais + narugaX[t];
			ll nis = bis + narugaY[t];

			if (eins >= 1 && eins <= n && nis >= 1 && nis <= m &&
					varge[ais][bis] + 1 < varge[eins][nis]) {
				varge[eins][nis] = varge[ais][bis] + 1;
				q.push({eins, nis});
			}
		}
	}

	ll svar = -MADAI;
	raz(i, 1, n + 1) raz(j, 1, m + 1) svar = max(svar, varge[i][j]);
	cout << svar;
}
