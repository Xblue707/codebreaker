#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<long long> solutions;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    solutions.push_back((int) (b * log10(a)) + 1);
  }

  for (int i = 0; i < solutions.size(); i++) { cout << solutions[i] << '\n'; }
}
