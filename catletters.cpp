#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  string master = "";
  int n, counter = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    master += x;
  }

  for (int j = 0; j < master.size(); j++) {
    if (master[j] == 'c' || master[j] == 'C') counter++;
  }


  double stuff = (double) counter / (double) master.size();
  stuff *= 100;
  stuff = (int) floor(stuff);

  int percentage = stuff;
  printf("%i%%", percentage);
}
