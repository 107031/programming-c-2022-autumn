#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	std::cin >> a >> b >> c;
	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}
	std::cout << ((a >= b + c) ? 
				 "impossible" : (a * a == b * b + c * c) ?
		         "right" : (a * a > b * b + c * c) ?
				 "acute" : "obtuse");
	return EXIT_SUCCESS;
}