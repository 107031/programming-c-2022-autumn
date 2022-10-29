#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	double a[1000]{ 0 };
	double p;
	double max = 0;
	int index = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		std::cin >> p;
		a[i] = p / 100 * a[i];
		if (max < a[i]) {
			max = a[i];
			index = i + 1;
		}
	}
	std::cout << index;
	return EXIT_SUCCESS;
}