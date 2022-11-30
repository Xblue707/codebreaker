#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main() {
  ull money;
  cin >> money;

  int cnt = 0;
  for (ull i = 0; i < 64; ++i)
    if (money & (ull)((ull)1 << i)) cnt++;
  cout << cnt;
}
