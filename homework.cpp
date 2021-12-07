#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n, a[3000000];
  cin >> n;
  for (int i = 0; i < n; i++) { cin >> a[i]; }
  sort(a, a + n);
  for (int b = 0; b < n; b++) { cout << a[b] << ' '; }
  cout << '\n';
}
