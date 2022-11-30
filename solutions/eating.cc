// eating
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
#define all(c) begin((c)), end((c))
#define sz(c) (int)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cout << #x << ": " << x << '\n';

unordered_set<string> ans;

int main() {
  setup int n;
  cin >> n;
  cin.ignore();
  rep(i, 0, n) {
    string k;
    getline(cin, k);
    int s = sz(ans);
    ans.insert(k);
    if (sz(ans) == s)
      cout << "NO" << nl;
    else
      cout << "YES" << nl;
  }
}
