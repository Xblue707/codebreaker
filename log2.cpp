#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n != 0) cout << (int) log2(n);
  else cout << 0;
}
