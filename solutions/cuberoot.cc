#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  double nums[100000];
  long long t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;
    nums[i] = n;
  }

  for (int j = 0; j < t; j++) cout << cbrt(nums[j]) << '\n';
}
