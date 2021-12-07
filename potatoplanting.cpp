#include <iostream>
using namespace std;
int main() {
  int h, w, n;
  cin >> h >> w >> n;
  for (int i = 1; i <= h * w; i++) {
    if (i <= n) cout << 'X';
    else cout << 'O';

    if (i % w == 0) cout << '\n';
  }
}
