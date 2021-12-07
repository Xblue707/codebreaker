#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  for (int i = 1; i <= n; i++) {
    int mMul = i * m;
    cout << mMul << '\n';
  }
}
