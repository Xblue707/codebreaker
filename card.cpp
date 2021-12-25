#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> d;
  int num, fd;
  cin >> num;

  for (int i = 0; i < num; i++) d.push_back(i);

  cin >> fd;

  string steps;
  cin >> steps;

  int tmp1, tmp2;

  for (int i = 0; i < steps.length() - 1; i++) {
    char c = steps[i];
    if (c == 65) { // A
      tmp1 = d.front();
      d.pop_front();
      d.push_back(tmp1);
    }
    else {
      tmp1 = d.front();
      tmp2 = d[1];
      d.pop_front();
      d.pop_front();
      d.push_front(tmp1);
      d.push_back(tmp2);
    }
  }
  cout << d[fd - 1] << ' ' << d[fd] << ' ' << d[fd + 1];
}
