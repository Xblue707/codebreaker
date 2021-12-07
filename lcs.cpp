#include <bits/stdc++.h>
using namespace std;

array<array<int, 1000>, 1000> memo;
array<string, 2> in;

int lcs(const int i, const int j) {
  if (i < 0 || j < 0) return 0;

  if (memo[i][j] >= 0) return memo[i][j];

  if (in[0].at(i) == in[1].at(j)) { memo[i][j] = 1 + lcs(i - 1, j - 1); }
  else {
    memo[i][j] = max(lcs(i, j - 1), lcs(i - 1, j));
  }

  return memo[i][j];
}

int main() {
  for (int i = 0; i < 1000; i++) { memo[i].fill(-1); }
  cin >> in[0] >> in[1];
  cout << lcs(in[0].length() - 1, in[1].length() - 1);
}
