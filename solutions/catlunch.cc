#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n, k, t;
  priority_queue<int> rottenFishes;
  long long result = 0; // total satisfaction
  long long cur = 0; // estimation of gains of eating all the fishes
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t >= 0) {
      cur += t;
      if (cur > 0) {
        result += cur;
        cur = 0;
      }
    }

    else {
      if (k == 1)
        cur += t;
      else {
        if (rottenFishes.size() < (k - 1))
          rottenFishes.push(t);
        else {
          if (t >= rottenFishes.top())
            cur += t;
          else {
            cur += rottenFishes.top();
            rottenFishes.pop();
            rottenFishes.push(t);
          }
        }
      }
    }
  }
  cout << result;
}
