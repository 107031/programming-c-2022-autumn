#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int k = 0;
	std::cin >> a >> b >> c >> d >> e;
	for (int i = 0; i <= 1000; i++) {
		if (a * i * i * i + b * i * i + c * i + d == 0 && i - e != 0) {
			k++;
		}
	}
	std::cout << k;
	return EXIT_SUCCESS;
}