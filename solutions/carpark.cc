#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, s, lol(0), cnt(0), k(0), c(0), ans(0);
  priority_queue<int, vector<int>, greater<int>> gaps;

  cin >> n >> s;

  int cars[n];

  for (int i = 0; i < n; i++) {
    cin >> cars[i];
  }

  while (true) {
    if (cars[lol] == 1) break;
    cars[lol] = -1;
    lol++;
  }

  for (int i = 0; i < n; i++) {
    if (cars[i] == 1) {
      c = 1;
      ans++;
      if (cnt > 0) {
        gaps.push(cnt);
        cnt = 0;
      }
    } else if (cars[i] == 0) {
      k += c;
      c = 0;
      cnt++;
    }
  }

  if (cars[n - 1] == 1) k++;

  for (int i = s; i < k; i++) {
    ans += gaps.top();
    gaps.pop();
  }

  cout << ans;
}
