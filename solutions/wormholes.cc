// wormholes
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
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

int main() {
  setup;
  int n, k;
  cin >> n >> k;
  vi adj[n];
  rep(i, 0, k) {
    int a, b;
    cin >> a >> b;
    adj[a].pub(b);
  }

  pq<ii> q; // time taken, node
  q.push(mpr(0, 0));
  while (!q.empty()) {
    ii cur = q.top();
    q.pop();
    int dist = -cur.fi, node = cur.se;
    if (node == n - 1) {
      cout << dist << nl;
      return 0;
    }
    q.push(mpr(-dist - 1, node + 1));
    rep(i, 0, sz(adj[node])) q.push(mpr(-dist - 1, adj[node][i]));
  }
}
