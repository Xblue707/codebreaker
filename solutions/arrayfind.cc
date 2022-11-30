#include <bits/stdc++.h>
using namespace std;

#define f0r(n) for (int i = 0; i < n; ++i)

int main() {
  int n;
  cin >> n;
  int arr[n];

  FOR(n) cin >> arr[i];

  sort(arr, arr + n);

  int m;
  cin >> m;
  int q;
  f0r(m) {
    cin >> q;
    int lb = distance(arr, lower_bound(arr, arr + n, q));
    int ub = distance(upper_bound(arr, arr + n, q), arr + n);
    printf("Smaller: %d, Greater: %d\n", lb, ub);
  }
}
