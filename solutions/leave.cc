// leave
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
  int n, k = 0;
  cin >> n;
  mp<int, int> left;
  qu<int> q;
  rep(i, 0, n) {
    cin >> k;
    if (k == 1) {
      int p;
      cin >> p;
      q.push(p);
    } else if (k == 2) {
      int p;
      cin >> p;
      left[p]++;
    } else {
      while (left[q.front()] > 0 && !q.empty()) {
        left[q.front()]--;
        q.pop();
      }
      cout << q.front() << ' ';
      q.pop();
    }
  }
}
