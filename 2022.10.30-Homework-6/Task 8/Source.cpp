#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[100000]{ 0 };
	int k = 0;
	int temp = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> k;
	for (; k != 0; (k > 0? k-- : k++)) {
		temp = (k > 0? a[n - 1] : a[0]);
		if (k > 0) {
			for (int i = n - 1; i > 0; i--) {
				a[i] = a[i - 1];
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				a[i] = a[i + 1];
			}
		}
		a[(k > 0? 0 : n - 1)] = temp;
	}
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}