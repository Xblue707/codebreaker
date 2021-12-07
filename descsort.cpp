#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v = {};
  v.clear();
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    v.push_back(m);
  }

  for (const auto &i : v) { sort(v.begin(), v.end(), greater<>()); }

  for (int j = 0; j < n; j++) { cout << v[j] << ' '; }
}
