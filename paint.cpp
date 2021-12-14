#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, total = 0;
  int price[20000], inc[20000];

  cin >> n;
  for (int i = 0; i < n; i++) cin >> price[i];
  for (int i = 0; i < n; i++) cin >> inc[i];

  for (int i = 0; i < n; i++) {
    int e = -1, ind = -1;
    for (int j = 0; j < n; j++) {
      if (inc[j] > e) {
        e = inc[j];
        ind = j;
      }
    }

    total += price[ind] + e * i;
    price[ind] = -1;
    inc[ind] = -1;
  }

  cout << total << '\n';
}
