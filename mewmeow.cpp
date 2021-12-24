#include <iostream>
using namespace std;

int main() {
  int n, m = 0, f = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "MEW") m += 1;
    else if (s == "MEOW") f += 1;
  }

  if (m == 0) cout << "OMG MEEEAHHHH!!!!\n";
  else cout << f / m;
}
