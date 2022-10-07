#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k >> m >> n;
	if (k < n) {
		std::cout << 2 * m * (n + k - 1) / k;
	}
	else {
		std::cout << 2 * m * n;
	}
	return EXIT_SUCCESS;
}