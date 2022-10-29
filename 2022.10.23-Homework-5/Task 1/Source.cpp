#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int x = 0;
	int a[1000]{ 0 };
	int k = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> x;
	for (int i = n; i >= 0; i--) {
		if (a[i] == x) {
			k++;
		}
	}
	std::cout << k;
	return EXIT_SUCCESS;
}