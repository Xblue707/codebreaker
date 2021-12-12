#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<char> chars;
  for (int i = 0; i < n; i++) {
    char a;
    cin >> a;
    chars.push_back(a);
  }
  for (int j = 0; j < chars.size(); j++) cout << (int) chars[j] << '\n';
}
