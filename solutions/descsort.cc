#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    v.push_back(m);
  }

  sort(v.begin(), v.end(), greater<int>());
  for (auto j : v) cout << j << ' ';
}
