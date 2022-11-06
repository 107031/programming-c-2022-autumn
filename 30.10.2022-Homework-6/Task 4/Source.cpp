#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
	int a[1000]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	for (int i = 0; i < 2; i++) {
		std::cin >> n >> k;
		for (int j = k; n <= k; n++, j--) {
			a[n - 1] = j;
		}
	}
	for (int i = 0; a[i] != 0; i++) {
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}