/* Write a program that takes in 1 integer value, A,
and output if the value is a square number or not. */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "";
  cin >> a;

  int root = sqrt(a);

  if (root * root == a) { cout << "yes"; }
  else {
    cout << "no";
  }
}
