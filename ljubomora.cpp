#include <bits/stdc++.h>
using namespace std;

int a[300000];

int main() {
  // fast io
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, mx = 0;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    if (mx < a[i]) mx = a[i];
  }

  int lo = 0, hi = mx;

  while (lo < hi) {
    int y = (lo + hi) / 2;
    int n2 = 0;
    for (int i = 0; i < m; i++) n2 += (a[i] + y - 1) / y;
    n2 > n ? lo = y + 1 : hi = y;
  }

  cout << lo;
}
