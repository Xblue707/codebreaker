#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    nums.push_back(k);
  }
  sort(nums.begin(), nums.end());
  cout << nums.back() - nums[0];
}
