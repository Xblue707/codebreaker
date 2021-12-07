#include <iostream>
using namespace std;
int main() {
  int n, x, b;
  cin >> n >> x;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (i == x) { b = a; }
  }
  cout << b;
}
