#include <iostream>
#include <map>
#include <stack>
using namespace std;
int main() {
  stack<char> bracks;
  map<char, char> m;
  m['('] = 'x';
  m[')'] = '(';
  string S;
  int n;
  char c;
  cin >> n >> S;
  for (int x; x < n; x++) {
    c = S[x];

    if (bracks.empty()) bracks.push(c);
    else if (m[c] == bracks.top()) bracks.pop();
    else bracks.push(c);
  }

  if (!bracks.size()) cout << "Valid";
  else cout << "Invalid";
}
