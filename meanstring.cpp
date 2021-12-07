#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int sum = 0, avg = 0;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    sum += num;
  }
  avg = sum / n;
  cout << avg;
}
