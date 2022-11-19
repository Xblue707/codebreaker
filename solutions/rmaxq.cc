/* the holy starter code */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define far(i, v) for (auto i : v)
#define setup                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);
template <typename T>
inline void in(T &inVar) {
	cin >> inVar;
}
template <typename T, typename... S>
inline void in(T &inVar, S &...args) {
	cin >> inVar;
	in(args...);
}
template <typename T>
inline void out(T outVar) {
	cout << outVar;
}
template <typename T, typename... S>
inline void out(T outVar, S... args) {
	cout << outVar;
	out(args...);
}
#define ain(var)            \
	for (auto &inVar : var) { \
		cin >> inVar;           \
	}
#define aout(var)           \
	for (auto outVar : var) { \
		cout << outVar << ' ';  \
	}                         \
	cout << '\n'
using vi = vector<ll>;
using vl = vector<vector<ll>>;
using pi = pair<ll, ll>;
#define fi first
#define se second
#define bgn(v) begin(v)
#define all(v) begin(v), end(v)
#define pb push_back
#define mp make_pair
#define sz(v) (ll)(v.size())
template <typename T, typename... S>
inline void srt(T a, S... args) {
	sort(begin(a), end(a), args...);
}
/* do not delete */

struct node {
	ll s, e;
	ll mn, mx, sum, add_val, set_val;
	bool lset;
	node *l, *r;

	node(ll _s, ll _e, ll A[] = NULL)
			: s(_s),
				e(_e),
				mn(0),
				mx(0),
				sum(0),
				lset(0),
				add_val(0),
				set_val(0),
				l(NULL),
				r(NULL) {
		if (A == NULL) return;
		if (s == e)
			mn = mx = sum = A[s];
		else {
			l = new node(s, (s + e) >> 1, A), r = new node((s + e + 2) >> 1, e, A);
			combine();
		}
	}

	void create_children() {
		if (s == e) return;
		if (l != NULL) return;
		ll m = (s + e) >> 1;
		l = new node(s, m);
		r = new node(m + 1, e);
	}

	void self_set(ll v) {
		lset = 1;
		mn = mx = set_val = v;
		sum = v * (e - s + 1);
		add_val = 0;
	}

	void self_add(ll v) {
		if (lset) {
			self_set(v + set_val);
			return;
		}
		mn += v, mx += v, add_val += v;
		sum += v * (e - s + 1);
	}

	void lazy_propagate() {
		if (s == e) return;
		if (lset) {
			l->self_set(set_val), r->self_set(set_val);
			lset = set_val = 0;
		}
		if (add_val != 0) {
			l->self_add(add_val), r->self_add(add_val);
			add_val = 0;
		}
	}

	void combine() {
		if (l == NULL) return;
		sum = l->sum + r->sum;
		mn = min(l->mn, r->mn);
		mx = max(l->mx, r->mx);
	}

#define UPDATE(name)                         \
	void name(ll x, ll y, ll v) {              \
		if (s == x && e == y) {                  \
			self_##name(v);                        \
			return;                                \
		}                                        \
		ll m = (s + e) >> 1;                     \
		create_children();                       \
		lazy_propagate();                        \
		if (x <= m) l->name(x, min(y, m), v);    \
		if (y > m) r->name(max(x, m + 1), y, v); \
		combine();                               \
	}
	UPDATE(add) // generates add
	UPDATE(set) // generates set

#define QUERY(name, fn, var, lazyfn)                             \
	ll range_##name(ll x, ll y) {                                  \
		if (s == x && e == y) return var;                            \
		if (l == NULL || lset) return lazyfn(var);                   \
		ll m = (s + e) >> 1;                                         \
		lazy_propagate();                                            \
		if (y <= m) return l->range_##name(x, y);                    \
		if (x > m) return r->range_##name(x, y);                     \
		return fn(l->range_##name(x, m), r->range_##name(m + 1, y)); \
	}

#define SAME(var) (var)
#define PART(var) ((var) / (e - s + 1) * (y - x + 1))
#define SUM(a, b) ((a) + (b))
	QUERY(min, min, mn, SAME)  // generates range_min
	QUERY(max, max, mx, SAME)  // generates range_max
	QUERY(sum, SUM, sum, PART) // generates range_sum

	~node() {
		if (l != NULL) delete l;
		if (r != NULL) delete r;
	}
} *root;

int main() {
	ll n;
	in(n);
	ll a[n];
	f0r(i, n) in(a[i]);
	root = new node(0, n - 1, a);
	ll m;
	in(m);
	rep(i, 0, m) {
		ll t;
		in(t);
		if (t == 0) {
			ll x, y;
			in(x, y);
			out(root->range_max(x, y), '\n');
		} else if (t == 1) {
			ll a, b, c;
			in(a, b, c);
			root->add(a, b, c);
		}
	}
}
