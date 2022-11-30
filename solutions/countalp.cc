#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                    's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  for (int i = 0; i < n; i++) {
    char a;
    cin >> a;
    s += a;
  }

  for (auto j : s) {
    size_t cnt = count(s.begin(), s.end(), j);
    printf("%c %lu\n", j, cnt);
  }
}
