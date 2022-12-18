#include <iostream>

int min(int a, int b, int c, int d) {
	if (d < c) {
		return min(a, b, d, c);
	}
	else if (c < b) {
		return min(a, c, b, d);
	}
	else if (a < b) {
		return a;
	}
	return b;
}

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	std::cout << min(a, b, c, d);
	return EXIT_SUCCESS;
}