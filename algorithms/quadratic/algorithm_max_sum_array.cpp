#include <iostream>
#include <vector>

using namespace std;

long sub_array_with_max_sum(vector<int> arr) {
    long result = arr[0];

	for(int i = 0; i < arr.size(); i++) {
		long sum = 0;
		for(int j = i; j < arr.size(); j++) {
			sum += arr[j];
			if (sum > result) result = sum;
		}
	}

    return result;
}
