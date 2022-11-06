#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000]{ 0 };
	int b[100][2]{ 0 };
	int c = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> b[i][0] >> b[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (; b[i][0] <= b[i][1]; b[i][0]++) {
			std::cout << a[b[i][0] - 1] << " ";
		}
		std::cout << "\n";
	}
	return EXIT_SUCCESS;
}