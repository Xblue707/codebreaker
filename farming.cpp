#include <iostream>
using namespace std;
int main() {
  int h, w, pCount = 0;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char a;
      cin >> a;
      if (a == '#') pCount++;
    }
  }
  cout << pCount;
}
