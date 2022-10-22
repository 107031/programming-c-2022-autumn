#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	for (int i = 1, k = 0; i <= n; i++) {
		for (int j = 0; j < i && k < n; j++, k++) {
			std::cout << i;
		}
	}
	return EXIT_SUCCESS;
}