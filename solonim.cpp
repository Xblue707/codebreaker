#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long total = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    total += a;
  }

  total % 2 ? cout << "No" : cout << "Yes";

  return 0;
}
