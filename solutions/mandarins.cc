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
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define ma map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mp make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
const ll mod = 1e9 + 7;

ll qexp(ll A, ll B, ll M) {
	if (B == 0) return 1;
  ll half = qexp(A, B/2, M);
  half *= half;
  half %= M;
  if (B%2==1) half *= A;
  return half%M;
}

int main() {
	ll n, k; cin >> n >> k;
	cout << qexp((k+1)%mod, n, mod);
}