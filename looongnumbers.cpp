#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

string add(string x, string y) {
  if (x.length() > y.length()) swap(x, y);

  string sum;
  int len1 = x.length(), len2 = y.length(), digitDiff = len2 - len1;
  int carry = 0, intSum;

  for (int i = len1 - 1; i >= 0; i--) {
    intSum = ((x[i] - '0') + (y[i + digitDiff] - '0') + carry);
    sum.push_back(intSum % 10 + '0');
    carry = intSum / 10;
  }

  for (int i = digitDiff - 1; i >= 0; i--) {
    intSum = ((y[i] - '0') + carry);
    sum.push_back(intSum % 10 + '0');
    carry = intSum / 10;
  }

  if (carry) sum.push_back(carry + '0');
  reverse(sum.begin(), sum.end());
  return sum;
}

int main() {
  string a, b;
  cin >> a >> b;
  string ans = add(a, b);
  cout << ans;
}
