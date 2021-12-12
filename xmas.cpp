#include <iostream>
#include <map>
using namespace std;
#define lg long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  map<lg, lg> x;
  lg n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    lg g;
    cin >> g;
    x[g] = i;
  }

  for (int j = 1; j <= x.size(); j++) cout << x[j] << '\n';
}
