#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, e;
  cin >> n >> e;

  vector<int> v[n];

  for (int j = 0; j < e; j++) {
    int k, l;
    cin >> k >> l;
    v[k - 1].push_back(l);
    v[l - 1].push_back(k);
  }

  for (auto i : v) {
    for (int m = 0; m < i.size(); m++)
      m == i.size() - 1 ? cout << i[m] : cout << i[m] << ' ';
    cout << '\n';
  }
}
