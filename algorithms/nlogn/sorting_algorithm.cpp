#include <iostream>

using namespace std;

int *merge_sort(int *arr, int start, int end) {
	if (start == end) {
		int *result = new int[1];
		*result = arr[start];
		return result;
	}

	int half = start + (end - start) / 2;
	int *left = merge_sort(arr, start, half);
	int *right = merge_sort(arr, half + 1, end);
	int size = end - start + 1;
	int *result = new int[size];
	int leftIndex = 0;
	int rightIndex = 0;

	for (int i = 0; i < size; i++) {
		if (leftIndex < half - start + 1 && rightIndex < end - half) {
			if (left[leftIndex] < right[rightIndex]) {
				result[i] = left[leftIndex++];
			}
			else{
				result[i] = right[rightIndex++];
			}
		} else if (leftIndex >= half - start + 1) {
			result[i] = right[rightIndex++];
		} else {
			result[i] = left[leftIndex++];
		}
	}

	delete[] left;
	delete[] right;
	return result;
}

int main() {
	// int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
	// int n = sizeof(arr)/sizeof(int);
	int n = 1000000;
	int *arr = new int[n];

	int el;
	int index = 0;
	while(cin >> el) {
		arr[index] = el;
		index++;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < n - 1) {
			cout << ", ";
		}
	}

	cout << endl;

	int *result = merge_sort(arr, 0, n - 1);

	cout << "after: " << endl;
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i < n - 1) {
			cout << ", ";
		}
	}

	delete[] result;
	delete[] arr;
}
