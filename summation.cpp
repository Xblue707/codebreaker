#include <iostream>
using namespace std;
int main() {
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a < 0) { sum -= a; }
    else if (a >= 0) {
      sum += a;
    }
  }
  cout << sum;
}
