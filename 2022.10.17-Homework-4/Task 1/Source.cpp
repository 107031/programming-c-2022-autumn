#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int k = 1;
	std::cin >> x;
	for (int i = 1; i <= (x / 2 + 1); ++i) {
		if (x % i == 0) {
			k++;
		}
	}
	std::cout << k;
	return EXIT_SUCCESS;
}