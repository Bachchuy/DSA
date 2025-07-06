#include<iostream>

using namespace std;

void bubblesort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubblesort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}