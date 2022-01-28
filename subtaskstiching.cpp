#include <experimental/random>
#include <iostream>
using namespace std;

int main() {
	int i = experimental::randint(1, 2);
	cout << i;
}
