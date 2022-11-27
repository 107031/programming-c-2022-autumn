#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int temp = 0;

	std::cin >> n >> m;

	int** array = new int* [n];
	for (int i = 0; i < n; ++i) array[i] = new int[m];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> array[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> temp;
			array[i][j] += temp;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < n; ++i) delete[] array[i];
	delete[] array;
	return EXIT_SUCCESS;
}