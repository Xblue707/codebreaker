#include <iostream>
#include <map>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  map<long, long> x;
  long n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    long g;
    cin >> g;
    x[g] = i;
  }

  for (auto j : x) cout << j.second << '\n';
}
