#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main() {
  stack<char> pairs;
  map<char, char> m;
  m['('] = 'x';
  m[')'] = '(';

  string S;
  int n;
  char c;
  cin >> n >> S;

  for (int x = 0; x < n; x++) {
    if (pairs.empty()) pairs.push(S[x]);
    else if (m[S[x]] == pairs.top()) pairs.pop();
    else pairs.push(S[x]);
  }

  if (!pairs.size()) cout << "Valid";
  else cout << "Invalid";
}
