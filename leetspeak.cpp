#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>
using namespace std;
int main() {
  bool leet = 0;
  regex acceptable("^[A-Za-z]+");
  string s;
  cin >> s;
  if (regex_match(s, acceptable)) leet = 0;
  else leet = 1;

  if (leet) cout << "l33t";
  else cout << "English";
}
