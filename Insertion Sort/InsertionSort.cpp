#include<iostream>

using namespace std;

void insertSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int key = a[i];// The element to be inserted
		int j = i - 1;//xet vi tri truoc do cua key 
		while (j >= 0 && a[j] > key) {//neu vi tri truoc do lon hon key
			a[j + 1] = a[j];//day phan tu lon hon key sang phai
			j--;//di chuyen j ve phia truoc
		}
		a[j + 1] = key;//dung lai khi j < 0 hoac a[j] <= key, chen key vao vi tri j + 1
	}
}
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	insertSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}