#include <iostream>

using namespace std;

int main() {
	// int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
	// int n = sizeof(arr)/sizeof(int);

	int n = 1000000;
	int *arr = new int[n];
	int el;
	int index = 0;

	while(cin >> el)
		arr[index++] = el;

	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < n - 1) {
			cout << ", ";
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	cout << "after: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < n - 1) {
			cout << ", ";
		}
	}
}
