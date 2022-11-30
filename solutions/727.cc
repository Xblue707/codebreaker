// 727
#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast() \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
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
  int n;
  string s;
  cin >> n >> s;
  int ind(0), cnt(0);
  pr<ii, int> ans;
  while (ind < n) {
    char c = s[ind];
    // basically, find the longest string of the form 72727...27
    if (c == '7') {
      int i = ind;
      cnt = 0;
      while (i < n && s[i + 1] == '2' && s[i + 2] == '7') {
        i += 2; // increase len by 2
        cnt++;
      }
      if (cnt > ans.se) {
        ans.fi = mpr(ind, i);
        ans.se = cnt;
      }
      ind = i;
    }
    ind++;
  }
  cout << ++ans.fi.fi << ' ' << ++ans.fi.se << nl;
}
