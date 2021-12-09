#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  string s;
  char letters[26]
    = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
       'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  for (int i = 0; i < n; i++) {
    char a;
    cin >> a;
    s += a;
  }

  for (int j = 0; j < 26; j++) {
    size_t count = std::count(s.begin(), s.end(), letters[j]);
    printf("%c %lu\n", letters[j], count);
  }
}
