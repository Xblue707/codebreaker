#include <iostream>
using namespace std;

int main() {
  int s;
  cin >> s;

  if (s < 20)
    cout << 'U';
  else if (s >= 20 && s <= 34)
    cout << 'E';
  else if (s >= 35 && s <= 49)
    cout << 'D';
  else if (s >= 50 && s <= 59)
    cout << 'C';
  else if (s >= 60 && s <= 74)
    cout << 'B';
  else if (s >= 75 && s <= 90)
    cout << 'A';
  else if (90 < s < 101)
    cout << "A*";
}
