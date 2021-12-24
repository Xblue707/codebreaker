#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> table;
  int n, total = 0, avg = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string x;
    int score;
    cin >> x >> score;
    table[x] = score;
  }

  int m;
  cin >> m;
  for (int j = 0; j < m; j++) {
    string name;
    cin >> name;
    total += table.find(name)->second;
  }
  avg = total / m;
  cout << avg;
}
