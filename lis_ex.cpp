#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> nums = vector<int>(n);
  for (int i = 0; i < n; i++) cin >> nums[i];

  int maxsum = 0;
  vector<int> lis;
  for (int x : nums) {
    auto it = lower_bound(lis.begin(), lis.end(), x);
    const int idx = it - lis.begin();
    if (it == lis.end()) lis.push_back(x);
    else *it = x;

    if (idx == maxsum) maxsum++;
  }

  cout << maxsum;
}
