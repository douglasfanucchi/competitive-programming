#include <iostream>
#include <vector>

using namespace std;

long sub_array_with_max_sum(vector<int>);

int main() {
    vector<int> arr;

    int el;
    while (cin >> el)
        arr.push_back(el);

    cout << sub_array_with_max_sum(arr) << endl;    
}
