#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double m, c;
	cin >> m >> c;
	double x = -(c / m);
	cout << fixed << setprecision(1) << x;
}
