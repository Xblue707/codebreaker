// exponentiate_ex
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
#define st set
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

__int128 read() {
	__int128 x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-') f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}

__int128 exp(__int128 a, __int128 b, __int128 mod) {
	a %= mod;
	__int128 r = 1;
	while (b) {
		if (b & 1) r = (r * a) % mod;
		a = (a * a) % mod;
		b >>= 1;
	}
	return r;
}

void print(__int128 x) {
	if (x < 0) {
		putchar('-');
		x = -x;
	}
	if (x > 9) print(x / 10);
	putchar(x % 10 + '0');
}

bool cmp(__int128 x, __int128 y) { return x > y; }

int main() {
	// setup;
	int t;
	cin >> t;
	__int128 a, b, mod;
	rep(i, 0, t) {
		a = read();
		b = read();
		mod = read();
		print(exp(a, b, mod));
		cout << nl;
	}
}