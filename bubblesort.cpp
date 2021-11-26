#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *array, int size) {
	for (int i = 0; i < size; i++) {
		int swaps = 0;
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				swaps = 1;
			}
		}
		if (!swaps) break;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	bubbleSort(arr, n);

	for (auto i : arr) cout << i << ' ';
}
