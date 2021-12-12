#include <iostream>
using namespace std;
int main() {
  long n, total = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    long area = a * b;
    total += area;
  }
  cout << total;
}
