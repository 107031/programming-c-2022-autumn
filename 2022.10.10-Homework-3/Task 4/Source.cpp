#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 1;
	int i = 1;
	int j = 0;
	std::cin >> n;
	do {
		do {
			std::cout << (((i + j) < n)? k++ : k--);
			j++;
		} while (j < n);
		std::cout << "\n";
		j = 0;
		i++;
		k = i;
	} while (i <= n);
	return EXIT_SUCCESS;
}