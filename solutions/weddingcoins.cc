#include <iostream>

int main() {
  long long n, i = 0, notes = 0;
  int vals[13] = {1000000, 500000, 100000, 50000, 10000, 5000, 1000,
                  500,     100,    50,     10,    5,     1};
  std::cin >> n;
  while (n > 0) {
    notes += (long long)n / vals[i];
    n %= vals[i];
    i++;
  }
  std::cout << notes << '\n';
}
