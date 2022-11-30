#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, v;
  cin >> n >> v;

  vector<int> c(n);
  for (int i = 0; i < n; ++i) cin >> c[i];

  vector<int> monies(v + 1);
  monies[0] = 0;

  for (int j = 1; j <= v; ++j) {
    auto it = upper_bound(c.begin(), c.end(), j);

    if (it == c.begin()) {
      monies[j] = -1;
      continue;
    }

    int mn = INT_MAX;

    for (it -= 1; it >= c.begin(); --it) {
      if (monies[j - *it] == -1) continue;
      mn = min(monies[j - *it] + 1, mn);
    }

    if (mn == INT_MAX) mn = -1;
    monies[j] = mn;
  }

  cout << monies[v];
}
