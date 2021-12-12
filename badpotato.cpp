#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int potatoes[n];
  int *p = potatoes;
  for (int i = 0; i < n; i++) { cin >> *(p + i); };
  int sum = 0;
  int max = 0;
  for (int i = 0; i <= n; i++) {
    if (*(p + i) != -1 && i != n) { sum += *(p + i); }
    else {
      if (sum > max) max = sum;;
      sum = 0;
    }
  }
  cout << max;
}
