#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;

  int root = sqrt(a);

  if (root * root == a) cout << "yes";
  else cout << "no";
}
