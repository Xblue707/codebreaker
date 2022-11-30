#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, temp;
  cin >> n >> k;

  map<int, int> mp;
  multiset<int> ms;
  multiset<int>::iterator lb, ib, ub;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    ms.insert(temp);
    mp[temp] = i + 1;
  }

  for (int i = 0; i < k; i++) {
    cin >> temp;

    ib = ms.lower_bound(temp);
    lb = ib;

    if (lb != ms.begin()) --lb;

    ub = ms.upper_bound(temp);

    if (ub == ms.end()) --ub;

    if (*ib == temp) {
      cout << mp[temp];
      ms.erase(ib);
    } else if (temp - *lb > *ub - temp) {
      cout << mp[*ub];
      ms.erase(ub);
    } else {
      cout << mp[*lb];
      ms.erase(*lb);
    }
    cout << '\n';
  }
}
