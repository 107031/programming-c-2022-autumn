#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int sum_n = 0;
	int sum_m = 0;
	
	std::cin >> n >> m;
	
	int** array = new int*[n];
	for (int i = 0; i < n; ++i)	array[i] = new int[m];
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> array[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			sum_n += array[i][j];
		}
		std::cout << sum_n << " ";
		sum_n = 0;
	}

	std::cout << "\n";

	for (int j = 0; j < m; ++j) {
		for (int i = 0; i < n; ++i) {
			sum_m += array[i][j];
		}
		std::cout << sum_m << " ";
		sum_m = 0;
	}

	std::cout << "\n";
	std::cout << "\n";

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < n; ++i) delete[] array[i];
	delete [] array;
	return EXIT_SUCCESS;
}