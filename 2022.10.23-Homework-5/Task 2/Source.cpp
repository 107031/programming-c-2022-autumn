#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int l = 0;
	int r = 0;
	int maxv = 0;
	int maxi = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> l >> r;
	maxv = a[l - 1];
	for (; l - 1 <= r - 1; l++) {
		if (a[l - 1] > maxv) {
			maxv = a[l - 1];
			maxi = l;
		}
	}
	std::cout << maxv << " " << maxi;
	return EXIT_SUCCESS;
}