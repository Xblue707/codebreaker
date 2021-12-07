#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int s, e;
  cin >> s;
  cin >> e;

  for (; s <= e; s++) {
    if (s % n == 0) cout << s << '\n';
  }
}
