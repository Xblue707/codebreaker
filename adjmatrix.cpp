#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, e;
  cin >> n >> e;

  // adjacency matrix
  int adj[n][n];

  for (int l = 0; l < n; l++) {
    for (int o = 0; o < n; o++) { adj[l][o] = 0; }
  }

  for (int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    adj[a - 1][b - 1] = 1;
    adj[b - 1][a - 1] = 1;
  }

  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) cout << adj[j][k];
    cout << '\n';
  }

  return 0;
}
