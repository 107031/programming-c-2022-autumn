#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;

	std::cin >> n;

	int** array = new int* [n];
	for (int i = 0; i < n; ++i) array[i] = new int[n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cin >> array[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = n - 1 - i; j < n; ++j) {
			std::swap(array[i][j], array[n - 1 - j][n - 1 - i]);
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < n; ++i) delete[] array[i];
	delete[] array;
	return EXIT_SUCCESS;
}