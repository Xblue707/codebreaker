#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++) cin >> A[i];
  sort(A, A + n);
  for (auto i : A) cout << i << ' ';
}
