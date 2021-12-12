#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int l, s, h;
  cin >> l >> s >> h;
  int sumDist1 = 2 * l - s - h, sumDist2 = s + h;
  cout << min(sumDist1, sumDist2);
}
