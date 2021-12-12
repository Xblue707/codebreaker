#include <iostream>
using namespace std;
int main() {
  int n, maleCount = 0, femaleCount = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "MEW") maleCount += 1;
    else if (s == "MEOW") femaleCount += 1;
  }

  if (maleCount == 0) cout << "OMG MEEEAHHHH!!!!\n";
  else cout << femaleCount / maleCount;
}
