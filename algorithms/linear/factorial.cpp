#include <iostream>

int main() {
	int n = 5;
	int m = 100;
	int result = 1;


	for (int i = 2; i <= n; i++) {
		result = (result%m * i%m);
		//result = result * i;
	}

	std::cout << result%m << '\n';
}

