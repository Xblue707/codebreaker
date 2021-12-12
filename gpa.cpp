#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int a;
  float gpa;
  cin >> a;

  if (a < 40) gpa = 0.8;
  else if (a >= 40 && a <= 44) gpa = 1.2;
  else if (a >= 45 && a <= 49) gpa = 1.6;
  else if (a >= 50 && a <= 54) gpa = 2.0;
  else if (a >= 55 && a <= 59) gpa = 2.4;
  else if (a >= 60 && a <= 64) gpa = 2.8;
  else if (a >= 65 && a <= 69) gpa = 3.2;
  else if (a >= 70 && a <= 79) gpa = 3.6;
  else if (a >= 80) gpa = 4.0;

  printf("%.1f\n", gpa);
}
