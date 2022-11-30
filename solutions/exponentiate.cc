#include <iostream>
using namespace std;

int expo(long long a, int b, int T) {
  a %= T;
  long long R = 1;
  while (b) {
    if (b & 1) R = (R * a) % T;
    a = (a * a) % T;
    b >>= 1;
  }

  return (int)R;
}

int main() {
  int n;
  cin >> n;
  unsigned long long num[100000];
  for (int i = 0; i < n; i++) {
    int a, b, m;
    cin >> a >> b >> m;
    num[i] = expo(a, b, m);
  }

  for (int j = 0; j < n; j++) cout << num[j] << '\n';
}
