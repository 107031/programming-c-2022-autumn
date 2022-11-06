#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[100]{ 0 };
	int max = -101;
	int maxi = 0;
	int min = 101;
	int mini = 0;
	int sum = 0;
	int product = 1;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (min > a[i]) {
			min = a[i];
			mini = i;
		}
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			sum += a[i];
		}
		if (i > mini && i < maxi || i < mini && i > maxi) {
			product *= a[i];
		}
	}
	std::cout << sum << " " << product;
	return EXIT_SUCCESS;
}