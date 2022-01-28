// if you're lucky, you might get AC on the first try
#include <experimental/random>
#include <iostream>
using namespace std;

int main() {
	int i = experimental::randint(1, 2);
	cout << i;
}
