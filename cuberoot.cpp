#include <iostream>
using namespace std;

double diff(double n, double mid) {
  double temp = mid * mid * mid;
  if (n > temp) return n - temp;
  else return temp - n;
}

double cubeRt(double n) {
  double start = 0, end = n;

  double e = 0.0000001;

  while (true) {
    double mid = (start + end) / 2;
    double error = diff(n, mid);

    if (error <= e) return mid;
    if ((mid * mid * mid) > n) end = mid;
    else start = mid;
  }
}

int main() {
  double nums[100000];
  long long t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;
    nums[i] = n;
  }

  for (int j = 0; j < t; j++) cout << cubeRt(nums[j]) << '\n';
}
