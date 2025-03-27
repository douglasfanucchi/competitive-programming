#include <iostream>

using namespace std;

int main() {
	int arr[] = {-1, 2, 4, -3, 5, 2, -5, 365};
	int size = sizeof(arr)/sizeof(int);
	int max = 0;

	for(int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			int sum = 0;
			for(int k = i; k <= j; k++) {
				sum += arr[k];
			}
			if (sum > max) max = sum;
		}
	}

	cout << max << endl;
}
