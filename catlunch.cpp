#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, t;
  priority_queue<int> rottenFishes;
  long long result = 0; // total satisfaction
  long long currGain = 0; // estimation of gains of eating all the fishes
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t >= 0) {
      currGain += t;
      if (currGain > 0) {
        result += currGain;
        currGain = 0;
      }
    }

    else {
      if (k == 1) currGain += t;
      else {
        if (rottenFishes.size() < (k - 1)) rottenFishes.push(t);
        else {
          if (t >= rottenFishes.top()) currGain += t;
          else {
            currGain += rottenFishes.top();
            rottenFishes.pop();
            rottenFishes.push(t);
          }
        }
      }
    }
  }
  cout << result;
}
