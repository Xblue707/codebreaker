#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long N;
  cin >> N;

  vector<long> A(N), B(N);
  for (auto i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (auto i = 0; i < N; i++) {
    cin >> B.at(i);
  }

  long X;
  cin >> X;

  sort(A.begin(), A.end());
  sort(B.begin(), B.end(), greater<long>());

  long total = 0;
  for (auto i = 0; i < N; i++) {
    long diff = A.at(i) + B.at(i) - X;
    if (diff > 0) total += diff;
  }

  cout << total * 100;
}
