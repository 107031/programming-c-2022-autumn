#include <iostream>

int min(int a, int b, int c, int d) {
	if (a <= b && a <= c && a <= d) {
		return a;
	}
	else if (b <= a && b <= c && b <= d) {
		min(b, c, d, a);
	}
	else if (c <= a && c <= b && c <= d) {
		min(c, a, b, d);
	}
	else { return d; }
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