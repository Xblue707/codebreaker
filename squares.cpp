#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int l, mx;
  cin >> l;

  mx = pow(l, 2);

  for (int i = 1; i <= mx; i++) {
    int root = sqrt(i);
    if (root * root == i) cout << i << ' ';
    else continue;
  }
}
