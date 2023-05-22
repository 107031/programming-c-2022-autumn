#include <iostream>
#include <ostream>
#include "Matrix.h"

int main(int argc, char* argv[]) {
	float n = 0;
	Matrix a(2, 2);
	a.insert_value();
	Matrix b(2, 2);
	b.insert_value();
	Matrix c = a + b;
	std::cout << "vvedite chislo" << std::endl;
	std::cin >> n;
	std::cout << "summa: " << std::endl;
	std::cout << c;
	std::cout << "umnojenie: " << std::endl;
	std::cout << a * b; \
	std::cout << "umnojenie na " << n << std::endl;
	std::cout << n * a;
	return EXIT_SUCCESS;
}