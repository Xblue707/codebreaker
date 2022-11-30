#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  int p = 0;
  cin >> n >> k;
  if (k > n * (n - 1)) {
    cout << "NO";
  } else if (k == n && k == 2) {
    cout << "NO";
  } else {
    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (n % 2 == 0) {
          if ((i == j && !(i == n / 2 || i == n / 2 + 1)) ||
              (i == n / 2 && j == n / 2 + 1) ||
              (i == n / 2 + 1 && j == n / 2) || p >= k) {
            cout << ".";
          } else {
            cout << "#";
            p++;
          }
        } else if (n % 2 == 1) {
          if (i == j || p >= k) {
            cout << ".";
          } else {
            cout << "#";
            p++;
          }
        }
      }
      cout << "\n";
    }
  }
}
