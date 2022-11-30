#include <bits/stdc++.h>
using namespace std;
#define io_speed_up ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define INF 0x3f3f3f3f

int head[110010], n, m, k, s, t, cnt;
long long dis[110010];
bool vis[110010];

struct Node {
  int u;
  long long dis;
  bool operator<(const Node &x) const { return dis > x.dis; }
};

struct Edge {
  int v, next;
  long long w;
} edge[11000010];

void addEdge(int u, int v, long long w) {
  edge[++cnt].v = v;
  edge[cnt].w = w;
  edge[cnt].next = head[u];
  head[u] = cnt;
}

void dijkstra(int s) {
  priority_queue<Node> q;
  for (int i = 0; i <= (k + 1) * n - 1; ++i) dis[i] = INF;
  dis[s] = 0;
  q.push(Node{s, 0});
  while (!q.empty()) {
    int u = q.top().u;
    long long l = q.top().dis;
    q.pop();
    if (l > dis[u]) continue;
    for (int i = head[u]; i; i = edge[i].next) {
      int v = edge[i].v;
      long long len = edge[i].w;
      if (dis[v] > dis[u] + len) {
        dis[v] = dis[u] + len;
        q.push(Node{v, dis[v]});
      }
    }
  }
}

int main() {
  io_speed_up;
  cin >> n >> m >> k >> s >> t;
  for (int i = 1, u, v, w; i <= m; ++i) {
    cin >> u >> v >> w;
    for (int j = 0; j <= k; ++j) {
      int tu = u + n * j, tv = v + n * j;
      if (j != k) {
        addEdge(tu, tv + n, 0);
        addEdge(tv, tu + n, 0);
      }
      addEdge(tu, tv, w);
      addEdge(tv, tu, w);
    }
  }
  dijkstra(s);
  long long ans = INF;
  for (int i = 0; i <= k; ++i) {
    ans = min(ans, dis[t + n * i]);
  }
  cout << ans;
  return 0;
}
