#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int temp = 0;
	std::cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	std::cout << "a = " << a << " b = " << b;
	return EXIT_SUCCESS;
}