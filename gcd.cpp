#include <iostream>
using namespace std;

int main() {
  int arr[2];
  for (int i = 0; i < 2; i++) cin >> arr[i];
  int n1 = arr[0];
  int n2 = arr[1];
  while (n1 != n2) {
    if (n1 > n2) n1 -= n2;
    else n2 -= n1;
  }
  cout << n1;
}
