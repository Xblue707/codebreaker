#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, s;
  unsigned long long total = 0;
  cin >> n >> s;
  vector<long double> tripTime;

  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    tripTime.push_back(t);
  }
  if (s == 0) {
    for (int j = 0; j < tripTime.size(); j++) { total += (2 * tripTime[j]); }
  }
  else {
    sort(tripTime.rbegin(), tripTime.rend());
    for (int j = 0; j < tripTime.size(); j++) {
      if (j < s) { tripTime[j] /= 2; }
      float totalA = tripTime[j] * 2;
      total += totalA;
    }
  }
  cout << total;
}
