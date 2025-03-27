#include <iostream>

using namespace std;

int main() {
	int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int size = sizeof(arr)/4;
	int max = 0;

	for(int i = 0; i < size; i++) {
		int sum = 0;
		for(int j = i; j < size; j++) {
			sum += arr[j];
			if (sum > max) max = sum;
		}
	}

	cout << max << endl;
}
