// numericalstrings
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

// prioritise numbers with d digits over numbers with d-1 digits

bool len(string a, string b) {
  // choose d digits over d-1 digits if their lengths differ
  if (a.length() != b.length())
    return a.length() > b.length();
  else
    return a > b; // if their lengths are the same then choose the one w
                  // greater value
}

bool val(string a, string b) {
  return a + b > b + a; // from editorial
}

int main() {
  setup;
  int n, k;
  cin >> n >> k;
  string a[n];
  rep(i, 0, n) cin >> a[i];
  sort(a, a + n, len);
  sort(a, a + k,
       val); // pick the top k based on the first sort, and only choose those
  // then output those k
  rep(i, 0, k) cout << a[i];
  cout << nl; // bye
}
