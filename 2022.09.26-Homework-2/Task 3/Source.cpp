#include <iostream> 

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k >> m >> n;
	if (k < n) {
		std::cout << m * 2 * (n + k - 1) / k;
	}
	else {
		std::cout << m * 2 * n;
	}
	return EXIT_SUCCESS;
}