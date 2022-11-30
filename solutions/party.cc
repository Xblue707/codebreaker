#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, e;
  cin >> n >> e;
  vector<int> v[n];
  for (int j = 0; j < e; ++j) {
    int k, l;
    cin >> k >> l;
    v[k - 1].push_back(l);
    v[l - 1].push_back(k);
  }

  if (v[0].empty()) {
    cout << 0;
  } else {
    set<int> attenders;
    for (auto i : v[0]) {
      attenders.insert(i);
      for (auto j : v[i - 1]) attenders.insert(j);
    }
    cout << attenders.size() - 1;
  }
}
