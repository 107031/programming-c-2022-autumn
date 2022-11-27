#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int a[30000]{ 0 };
	int temp = 0;
	int min = 10000;
	int max = 0;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		a[temp]++;
		if (max < temp) {
			max = temp;
		}
		if (min > temp) {
			min = temp;
		}
	}
	for (int i = 0; i < m; i++) {
		std::cin >> temp;
		if (a[temp] != 0) {
			a[temp] = -1;
		}
		if (max < temp) {
			max = temp;
		}
		if (min > temp) {
			min = temp;
		}
	}
	for (; min <= max; min++) {
		if (a[min] == -1) {
			std::cout << min << " ";
		}
	}
	return EXIT_SUCCESS;
}