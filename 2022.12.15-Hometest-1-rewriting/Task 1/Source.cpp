#include <iostream>

int array[10][10]{ 0 };

void Spiral(int n_origin, int n, int value = 1) {
	int column = (n_origin - n) / 2;
	int row = (n_origin - n) / 2;
	if (n < 1) {
		return;
	}
	else if (n == 1) {
		array[column][row] = value;
		return;
	}
	for (int i = 0; i < n - 1; ++i) {
		array[column][row++] = value++;
	}
	for (int i = 0; i < n - 1; ++i) {
		array[column++][row] = value++;
	}
	for (int i = 0; i < n - 1; ++i) {
		array[column][row--] = value++;
	}
	for (int i = 0; i < n - 1; ++i) {
		array[column--][row] = value++;
	}
	Spiral(n_origin, n - 2, value);
}

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	Spiral(n, n , 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
	return EXIT_SUCCESS;
}