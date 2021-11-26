#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	char weapon;
	double primary, secondary;
	cin >> weapon >> primary >> secondary;

	double sum_attack = 0;

	double maxDamage = 0, weapon_multi = 0;

	for (int i = 1; i <= 4; i++) {
		int attack;
		cin >> attack;
		sum_attack += attack;
	}

	if (weapon == 'G') weapon_multi = 1.6;
	else if (weapon == 'K') weapon_multi = 1.7;

	maxDamage = weapon_multi * ((4 * primary) + secondary) * (sum_attack / 100);

	cout << fixed << setprecision(2);

	cout << maxDamage;
}
