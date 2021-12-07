#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int h, w;
  cin >> h >> w;

  vector<vector<int>> v(h + 1, vector<int>(w + 1, 0));
  v[1][1] = 1;

  for (int hi = 1; hi <= h; hi++) {
    for (int wi = 1; wi <= w; wi++) {
      char c;
      cin >> c;
      if (c == 'X') { v[hi][wi] = -1; }
    }
  }

  for (int x = 1; x <= h; x++) {
    for (int y = 1; y <= w; y++) {
      if (x == y && y == 1) continue;
      if (v[x][y] == -1) {
        v[x][y] = 0;
        continue;
      }
      v[x][y] = (v[x - 1][y] + v[x][y - 1]) % MAX;
    }
  }

  cout << v[h][w];
}
