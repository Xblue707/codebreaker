#include <iostream>
using namespace std;

int main() {
  int n, e;
  cin >> n >> e;

  // adjacency matrix
  bool adj[n][n];

  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) adj[a][b] = 0;
  }

  for (int x = 0; x < e; x++) {
    int a, b;
    cin >> a >> b;
    adj[a - 1][b - 1] = 1;
    adj[b - 1][a - 1] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << (int)adj[i][j];
    cout << '\n';
  }

  return 0;
}
