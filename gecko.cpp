#include <bits/stdc++.h>
using namespace std;
array<array<int, 500>, 500> sums;

int tile(const int i, const int j, const int W) {
  if (i < 0 || j < 0 || j >= W) { return 0; }
  return sums[i][j];
}

int main() {
  int h, w;
  cin >> h >> w;

  array<array<int, 500>, 500> tiles;
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++) cin >> tiles[i][j];

  copy(tiles[0].begin(), tiles[1].end(), sums[0].begin());

  for (int i = 1; i < h; i++) {
    for (int j = 0; j < w; j++) {
      sums[i][j]
        = max(max(tile(i - 1, j - 1, w), tile(i - 1, j, w)), tile(i - 1, j + 1, w))
        + tiles[i][j];
    }
  }

  int mx = 0;
  for (int i = 0; i < w; i++) mx = max(mx, sums[h - 1][i]);
  cout << mx;
}
