#include <iostream>
using namespace std;
int main() {
  int h, w, pCount = 0;
  cin >> h >> w;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      char a;
      cin >> a;
      if (a == '#') pCount++;
    }
  }
  cout << pCount;
}
