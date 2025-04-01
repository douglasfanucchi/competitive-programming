#include <vector>

long sub_array_with_max_sum(std::vector<int> arr) {
    long result = arr[0];
    long current = arr[0];

    for(int i = 0; i < arr.size(); i++) {
        current += arr[i];
        if (current > result) {
            result = current;
        }
        if (current < 0)
            current = 0;
    }
    return result;
}
