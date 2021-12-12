#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vb vector<bool>
#define ii pair<int, int>
#define eb emplace_back

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int w, h, sc, sr;
  cin >> w >> h >> sc >> sr;
  sr = h - sr;
  sc--;
  vector<vb> grid(h, vb(w));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      char c;
      cin >> c;
      grid[i][j] = c == '.';
    }
  }

  queue<ii> q;
  q.emplace(sr, sc);
  vector<vi> dist(h, vi(w, 1e9));
  dist[sr][sc] = 0;
  int ans = 0;
  while (q.size()) {
    auto [r, c] = q.front();
    q.pop();
    ans = max(ans, dist[r][c]);
    int ndist = dist[r][c] + 1;
    for (int dr = -1; dr <= 1; ++dr) {
      for (int dc = -1; dc <= 1; ++dc) {
        int nr = dr + r;
        int nc = dc + c;
        if (nr < 0 || nc < 0 || nr >= h || nc >= w) continue;
        if (!grid[nr][nc]) continue;
        if (ndist >= dist[nr][nc]) continue;
        q.emplace(nr, nc);
        dist[nr][nc] = ndist;
      }
    }
  }

  cout << ans;
}
