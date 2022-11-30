#include <bits/stdc++.h>
using namespace std;

#define lg long
#define ll long long
#define ull unsigned long long

#define loop(var, start, end) for (auto var = start; var < end; ++var)
#define dloop(var, start, end) for (auto var = start; var > end; --var)
#define iloop(var, st) for (auto var : st)

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long tc, x1, x2, y1, y2;
  cin >> tc;

  while (tc--) {
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
      cout << abs(y2 - y1) << '\n';
    else if (y1 == y2)
      cout << abs(x2 - x1) << '\n';
    else
      cout << abs(y2 - y1) + abs(x2 - x1) + 2 << '\n';
  }
}
