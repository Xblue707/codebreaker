#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int spaces = n - 1, asterisks = n;

  // first half
  for (int k = 0; k < n; k++) {
    for (int j = 0; j < spaces; j++) { cout << " "; }
    for (int i = 0; i < asterisks; i++) { cout << 'x'; }

    cout << '\n';
    spaces--;
    asterisks += 2;
  }

  asterisks -= 2;
  spaces++;

  // bottom half, the same but reversed
  for (int k = n - 2; k > -1; k--) {
    for (int j = spaces; j > -1; j--) { cout << " "; }
    for (int i = asterisks - 3; i > -1; i--) { cout << 'x'; }

    cout << '\n';
    spaces++;
    asterisks -= 2;
  }
}
