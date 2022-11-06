#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[100]{ 0 };
	int j = 0;
	int k = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			std::cout << a[i] << " ";
			j++;
		}
	}
	std::cout << "\n";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			std::cout << a[i] << " ";
			k++;
		}
	}
	std::cout << "\n" << (k > j ? "YES" : "NO");
	return EXIT_SUCCESS;
}