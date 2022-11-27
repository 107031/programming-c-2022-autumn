#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[100]{ 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> n;
	for (int i = 0; a[i] != 0; i++) {
		if (n > a[i]) {
			std::cout << i + 1;
			break;
		}
	}
	return EXIT_SUCCESS;
}