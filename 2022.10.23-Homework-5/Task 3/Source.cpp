#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int max = 0;
	int min = 1000;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		max = (max > a[i] ? max : a[i]);
		min = (min < a[i] ? min : a[i]);
	}
	for (int i = 0; i < n; i++) {
		a[i] = (a[i] == max ? min : a[i]);
		std::cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}