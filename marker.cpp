#include <iostream>
using namespace std;
int main() {
  int n, sScore = 0, pScore = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    long a, b, res;
    char op, equals;
    cin >> a >> op >> b >> equals >> res;

    if (op == '+') {
      if (a + b == res) sScore++;
    }
    else if (op == '-') {
      if (a - b == res) sScore++;
    }
    else if (op == '*') {
      if (a * b == res) sScore++;
    }
    else if (op == '/') {
      if (a / b == res) sScore++;
    }
  }

  for (int j = 1; j <= n; j++) {
    long a, b, res;
    char op, equals;
    cin >> a >> op >> b >> equals >> res;

    if (op == '+') {
      if (a + b == res) pScore++;
    }
    else if (op == '-') {
      if (a - b == res) pScore++;
    }
    else if (op == '*') {
      if (a * b == res) pScore++;
    }
    else if (op == '/') {
      if (a / b == res) pScore++;
    }
  }

  cout << "Spongebob: " << sScore << '\n';
  cout << "Patrick: " << pScore << '\n';
}
