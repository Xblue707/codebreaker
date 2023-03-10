#include <iostream>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  set<int> cats;

  // get the input
  for (int i = 0; i < m; i++) {
    int j, k;
    cin >> j >> k;
    if (j != k) {
      cats.insert(j);
      cats.insert(k);
    }
  }
  cout << n - cats.size();
}
