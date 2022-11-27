#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[100000]{ 0 };
	int min = 100000;
	int temp = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (min > a[i]) {
			min = a[i];
		}
	}
	while (a[0] != min) {
		temp = a[0];
		for (int i = 0; i < n; i++) {
			a[i] = a[i + 1];
		}
		a[n - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}