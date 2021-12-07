#include <iostream>
using namespace std;
int main() {
  long sum = 0, n;
  while (n != -1) {
    cin >> n;
    if (n == -1) { break; }
    sum += n;
  }
  cout << sum;
}
