#include <iostream>
#include <locale>
#include <regex>
#include <vector>
using namespace std;
int main() {
  bool isHex = 0;
  int n;
  cin >> n;
  vector<string> nums;
  for (int i = 1; i <= n; i++) {
    string num;
    cin >> num;
    num.erase(num.begin());
    nums.push_back(num);
  }

  for (int j = 0; j < nums.size(); j++) {
    for (int k = 1; k < nums[j].size(); k++) {
      if (isxdigit(nums[j][k])) { isHex = 1; }
      else {
        isHex = 0;
        break;
      }
    }
    if (isHex) cout << "Hexadecimal\n";
    else cout << "Not Hexadecimal\n";
  }
}
