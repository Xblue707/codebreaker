#include <bits/stdc++.h>
using namespace std;

deque<char> seq; // Stores the characters in seq

void addBack(char a) { seq.push_back(a); }

void addFront(char b) { seq.push_front(b); }

void snipBack(int c) { seq.erase(seq.begin() + c + 1, seq.end()); }

void snipFront(int d) { seq.erase(seq.begin(), seq.begin() + d + 1); }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  string instruction;
  deque<char> queries;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> instruction;
    if (instruction.compare("ADD_BACK") == 0) {
      char nucleo1;
      cin >> nucleo1;
      addBack(nucleo1);
    } else if (instruction.compare("ADD_FRONT") == 0) {
      char nucleo2;
      cin >> nucleo2;
      addFront(nucleo2);
    } else if (instruction.compare("SNIP_BACK") == 0) {
      int x;
      cin >> x;
      snipBack(x);
    } else if (instruction.compare("SNIP_FRONT") == 0) {
      int y;
      cin >> y;
      snipFront(y);
    } else if (instruction.compare("QUERY") == 0) {
      int Z;
      cin >> Z;
      queries.push_back(seq[Z]);
    }
  }

  for (auto j : queries) cout << j << '\n';
}
