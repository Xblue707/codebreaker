#include <iostream>
using namespace std;
int main() {
  int h, w, count = 0;
  cin >> h >> w;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      char a;
      cin >> a;
      if (a == '*') count++;
    }
  }
  cout << count;
}
