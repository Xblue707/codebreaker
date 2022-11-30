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

int r, c, a[41][41], sum;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y) {
  sum += a[x][y];
  a[x][y] = 0;
  if (x == r && y == c) return;

  int mx, my, ans = 0;

  rep(i, 0, 4) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx >= 1 && tx <= r && ty >= 1 && ty <= c && a[tx][ty] > ans) {
      ans = a[tx][ty];
      mx = tx, my = ty;
    }
  }
  dfs(mx, my);
}

int main() {
  cin >> r >> c;
  rep(i, 1, r + 1) rep(j, 1, c + 1) cin >> a[i][j];
  dfs(1, 1);
  cout << sum;
}
