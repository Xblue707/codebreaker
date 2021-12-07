#include <cstdlib>
#include <iostream>
#include <string> // stoi
using namespace std;
int main() {
  string num;
  cin >> num;
  int oddDigits = 0, evenDigits = 0;
  for (int i = 0; i < num.size(); i++) {
    if (i % 2 == 0 || i == 0) {
      int n = (int) num[i] - 48;
      evenDigits += n;
    }
    else if (i % 2 == 1) {
      int n = (int) num[i] - 48;
      oddDigits += n;
    }
  }

  if ((max(oddDigits, evenDigits) - min(oddDigits, evenDigits)) % 11 == 0) {
    cout << "YES";
  }
  else cout << "NO";
}
