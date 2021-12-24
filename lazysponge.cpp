#include <iostream>
using namespace std;

int main() {
  int n, x, b = 0;
  cin >> n >> x;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (i == x) b = a;
  }
  cout << b;
}
