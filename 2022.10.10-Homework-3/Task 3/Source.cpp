#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 1;
	int i = 1;
	std::cin >> n;
	do {
		do {
			std::cout << k++ << " ";
		} while (k != n + i);
		std::cout << "\n";
		i++;
		k = i;
	} while (i <= n);
	return EXIT_SUCCESS;
}