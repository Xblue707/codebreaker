#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> d;
  int num, find;
  cin >> num;

  for (int i = 0; i < num; i++) d.push_back(i);

  cin >> find;

  string steps;
  cin >> steps;

  int temp1, temp2;

  for (int i = 0; i < steps.length() - 1; i++) {
    char c = steps[i];
    if (c == 65) { // A
      temp1 = d.front();
      d.pop_front();
      d.push_back(temp1);
    }
    else {
      temp1 = d.front();
      temp2 = d[1];
      d.pop_front();
      d.pop_front();
      d.push_front(temp1);
      d.push_back(temp2);
    }
  }
  cout << d[find - 1] << ' ' << d[find] << ' ' << d[find + 1];
}
