#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 1000005

void sieve(vector<int>& primes) {
  bool isPrime[MAX_SIZE];
  memset(isPrime, true, sizeof(isPrime));

  for (int p = 2; p * p < MAX_SIZE; p++) {
    if (isPrime[p]) {
      for (int i = p * p; i < MAX_SIZE; i += p) isPrime[i] = false;
    }
  }

  for (int p = 2; p < MAX_SIZE; p++)
    if (isPrime[p]) primes.push_back(p);
}

int main() {
  vector<int> primes;
  sieve(primes);

  long long n;
  cin >> n;

  cout << primes[n - 1];
  return 0;
}
