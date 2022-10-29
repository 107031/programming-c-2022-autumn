#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int max = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (max < a[i] + a[i - 1] + a[i - 2]) {
			max = a[i] + a[i - 1] + a[i - 2];
		}
	}
	std::cout << max;
	return EXIT_SUCCESS;
}