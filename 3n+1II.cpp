#include <iostream>
using namespace std;

int main() {
  int n, c, temp;
  cin >> n >> c;
  temp = n;
  if (c > 0) {
    int counter = 1;
    for (int i = 1; i < c; i++) {
      if (temp != 1) {
        (temp % 2 == 0) ? temp /= 2 : temp = 3 * temp + 1;
        counter++;
      }
    }
    if (c <= counter) cout << temp;
    else cout << "-1";
  }
}
