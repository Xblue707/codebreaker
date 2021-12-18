#include <iostream>
using namespace std;

void incScore(int score, int n1, int n2, int expected, char op) {
  switch (op) {
    case '+':
      if (n1 + n2 == expected) score++;
      break;
    case '-':
      if (n1 - n2 == expected) score++;
      break;
    case '*':
      if (n1 * n2 == expected) score++;
      break;
    case '/':
      if (n1 / n2 == expected) score++;
      break;
  }
}

int main() {
  int n, sScore = 0, pScore = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long a, b, res;
    char op, equals;
    cin >> a >> op >> b >> equals >> res;
    incScore(sScore, a, b, res, op);
  }

  for (int j = 0; j < n; j++) {
    long a, b, res;
    char op, equals;
    cin >> a >> op >> b >> equals >> res;

    incScore(pScore, a, b, res, op);
  }

  cout << "Spongebob: " << sScore << '\n';
  cout << "Patrick: " << pScore << '\n';
}
